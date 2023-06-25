#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint8_t BYTE;

bool is_new_jpeg(BYTE b[]);

const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover file\n");
        return 1;
    }

    FILE *infile = fopen(argv[1], "r");

    if (infile == NULL)
    {
        printf("Cannot open file: %s\n", argv[1]);
        return 2;
    }

    FILE *outfile = NULL; // output file to write
    BYTE buffer[BLOCK_SIZE]; // hold each chunk from memory card

    int num_jpegs = 0;
    bool jpeg_is_open = false;
    char fname[8];

    // Keep reading 512 byte chunks from the memory card
    while (fread(buffer, 1, BLOCK_SIZE, infile) == BLOCK_SIZE)
    {
        // Check if a new JPEG image has been located
        if (is_new_jpeg(buffer))
        {
            // If there is an output file being written to, it needs to be closed before a new one is opened
            if (outfile != NULL)
            {
                fclose(outfile);
            }

            // Will write out the files like: 000.jpg, 001.jpg, 002.jpg, etc.
            sprintf(fname, "%03i.jpg", num_jpegs);
            num_jpegs++;

            outfile = fopen(fname, "w");
            jpeg_is_open = true;

            fwrite(buffer, BLOCK_SIZE, 1, outfile);
        }
        else
        {
            // If a JPEG is currently open, keep writing data to it
            if (jpeg_is_open)
            {
                fwrite(buffer, BLOCK_SIZE, 1, outfile);
            }
        }
    }

    // Close out all files
    fclose(outfile);
    fclose(infile);

    return 0;
}

// Check for pattern in first four bytes that indicates a JPEG file
bool is_new_jpeg(BYTE b[])
{
    bool result = b[0] == 0xff & b[1] == 0xd8 & b[2] == 0xff & (b[3] & 0xf0) == 0xe0;

    return result;
}