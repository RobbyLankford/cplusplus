/* Seven-segment display for numerical outputs */

#include <stdio.h>

int main(void)
{
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                                 {0, 1, 1, 0, 0, 0, 0},
                                 {1, 1, 0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1},
                                 {0, 1, 1, 0, 0, 1, 1},
                                 {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 0, 0, 0, 0},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};

    for (int i = 0; i < 10; i++)
    {
        if (segments[i][0] == 1)
            printf(" *** \n");
        else
            printf("\n");


        if (segments[i][5] == 1 && segments[i][1] == 1)
        {
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
        }
        else if (segments[i][5] == 1)
        {
            printf("*    \n");
            printf("*    \n");
            printf("*    \n");
        }
        else if (segments[i][1] == 1)
        {
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
        }
        else
        {
            printf("\n\n\n");
        }


        if (segments[i][6] == 1)
            printf(" *** \n");
        else
            printf("\n");


        if (segments[i][4] == 1 && segments[i][2] == 1)
        {
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
        }
        else if (segments[i][4] == 1)
        {
            printf("*    \n");
            printf("*    \n");
            printf("*    \n");
        }
        else if (segments[i][2] == 1)
        {
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
        }
        else
        {
            printf("\n\n\n");
        }


        if (segments[i][3] == 1)
            printf(" *** \n");
        else
            printf("\n");


        printf("\n");
    }

    return 0;
}
