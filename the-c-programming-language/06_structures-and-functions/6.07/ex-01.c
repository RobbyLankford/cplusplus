#include <stdio.h>
#include <stdlib.h>

#define MAXLINES 1000

typedef int Length;
typedef char * String;

typedef struct tnode *Treeptr;

typedef struct tnode 
{
    char *word;
    int count;
    Treeptr left;
    Treeptr right;
} Treenode;

typedef int (*PFI)(char *, char *);

main()
{
    // Length can be used as a synonym for int
    Length len, maxlen;
    Length *lengths[MAXLINES];
    
    // String can be used as a synonym for char *
    String p, lineptr[MAXLINES], alloc(int);
    int strcmp(String, String);
    
    p = (String) malloc(100);

    // PFI is now a type for a pointer to function of two char * arguments
    PFI strcmp, numcmp;
    
    return 0;
}

// Can use Treeptr as the type
Treeptr talloc(void)
{
    return (Treeptr) malloc(sizeof(Treenode));
}