// pointer to pointer to char
char **argv;

// pointer to array[13] of int
int (*daytab)[13];

// array[13] of pointer to int
int *daytab[13];

// function returning pointer to void
void *comp();

// pointer to function returning void
void (*comp)();

// function returning pointer to array[] of pointer to function returning char
char (*(*x())[])();

// array[3] of pointer to function returning pointer to array[5] of char
char (*(*x[3])())[5];