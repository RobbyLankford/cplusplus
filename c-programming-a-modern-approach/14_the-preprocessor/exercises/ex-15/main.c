#include <stdio.h>

/*
    Insert Disk 1       (if ENGLISH is defined)
    Inserez Le Disque 1 (if FRENCH is defined)
    Inserte El Disco 1  (if SPANISH is defined)
*/

#if defined(FRENCH)
#define INSERT_DISK "Inserez Le Disque 1"
#elif defined(SPANISH)
#define INSERT_DISK "Inserte El Disco 1"
#else
#define INSERT_DISK "Insert Disk 1"
#endif

int main(void)
{
    return 0;
}