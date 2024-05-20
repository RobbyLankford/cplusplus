/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    /*
        %d : Displays i in decimal form, using minimum amount of space
        %5d : Displays i in decimal form, using a minimum of 5 characters with extra spaces at front
        %-5d : Displays i in decimal form, using a minimum of 5 characters with extra spaces at end
        %5.3d : Displays i in decimal form, using a minimum of 5 characters, a minimum of 3 digits, with extra spaces and zeros at front
    */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    
    /*
        %10.3f : Displays x in fixed decimal form, using 10 characters with 3 digits after decimal and extra spaces at front
        %10.3e : Displays x in exponential form, using 10 characters with 3 digits after decimal and extra spaces at front
        %-10g : Displays x as either fixed decimal or exponential form, using 10 characters with extra spaces at end
    */
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}