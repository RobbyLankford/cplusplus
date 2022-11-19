#include ".vscode/cs50.h"
#include <stdio.h>

int get_height(void);
int get_width(void);

int main(void) {
    // Get positive integer height from user
    int height = get_height();

    // Get positive integer width from user
    int width = get_width();

    // Build blocks based on height and width
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(void) {
    int n;
    do 
    {
        n = get_int("Height: ");
    }
    while(n < 1);
    return n;
}

int get_width(void) {
    int n;
    do 
    {
        n = get_int("Width: ");
    }
    while(n < 1);
    return n;
}