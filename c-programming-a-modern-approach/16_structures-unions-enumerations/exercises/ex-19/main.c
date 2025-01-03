#include <stdio.h>

struct pinball_machine
{
    char name[40];
    int year;
    
    enum {EM, SS} type;
    
    int players;
};

int main(void)
{
    return 0;
}