#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc != 3)
    {
        printf("Usage: ./reverse infile.wav outfile.wav\n");
        return 1;
    }

    // Open input file for reading
    char *infile = argv[1];
    FILE *inptr = fopen(infile, "r");

    if (inptr == NULL)
    {
        printf("Unable to open file: %s\n", infile);
        return 1;
    }

    // Read header
    WAVHEADER header;
    fread(&header, sizeof(WAVHEADER), 1, inptr);

    // Use check_format to ensure WAV format
    if (check_format(header) == 0)
    {
        printf("File %s is not a .wav file.\n", infile);
        return 1;
    }

    // Open output file for writing
    char *outfile = argv[2];
    FILE *outptr = fopen(outfile, "w");

    if (outptr == NULL)
    {
        printf("Unable to create file: %s\n", outfile);
        return 1;
    }

    // Write header to file
    fwrite(&header, sizeof(WAVHEADER), 1, outptr);

    // Use get_block_size to calculate size of block
    int block_size = get_block_size(header);
    BYTE buffer[block_size];
    int iterations = 0;

    // Write reversed audio to file

    // Reposition the stream at the end of the file
    if (fseek(inptr, 0, SEEK_END))
    {
        printf("Error in repositioning stream to end of file.\n");
        return 1;
    }

    // Read in chunks, making sure the header is not read in twice
    while (ftell(inptr) - block_size > sizeof(header))
    {
        // After reading in each chunk, need to back up two chunks
        int offset = -2;

        if (iterations == 0)
        {
            // For first iteration, only need to go back one chunk
            offset = -1;
        }

        // After reading in each chunk, back up chunk(s) to read in backwards
        if (fseek(inptr, offset * block_size, SEEK_CUR))
        {
            printf("Error in repositioning stream on iteration %i.\n", iterations);
            return 1;
        }

        fread(buffer, block_size, 1, inptr);
        fwrite(buffer, block_size, 1, outptr);

        iterations++;
    }

    fclose(inptr);
    fclose(outptr);

    return 0;
}

// Ensure that the header of a file confirms it is a .wav file
int check_format(WAVHEADER header)
{
    BYTE wav_format[4] = {'W', 'A', 'V', 'E'};

    for (int i = 0; i < 4; i++)
    {
        if (wav_format[i] != header.format[i])
        {
            return 0;
        }
    }

    return 1;
}

// Calculate the block size of a .wav file from its header
int get_block_size(WAVHEADER header)
{
    int block_size = (int) header.numChannels * header.bitsPerSample / 8;

    return block_size;
}