/* Print statistics for student quiz scores */

#include <stdio.h>

#define STUDENTS 5
#define QUIZZES 5

int main(void)
{
    int n[STUDENTS][QUIZZES];
    int total, high, low;

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Enter quiz grades for student %d: ", i + 1);
        
        total = 0;
        for (int j = 0; j < QUIZZES; j++)
            scanf("%d", &n[i][j]);
    }
    printf("\n");

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("\nTotal and average score for student %d: ", i + 1);
        
        total = 0;
        for (int j = 0; j < QUIZZES; j++)
            total += n[i][j];
        
        printf("%d %0.2f", total, (double) total / QUIZZES);
    }
    printf("\n");

    for (int j = 0; j < QUIZZES; j++)
    {
        printf("\nHigh, Low, and Average score for quiz %d: ", j + 1);
        
        total = 0;
        high = low = n[0][j];
        for (int i = 0; i < STUDENTS; i++)
        {
            total += n[i][j];
            
            if (n[i][j] > high)
                high = n[i][j];
            
            if (n[i][j] < low)
                low = n[i][j];
        }
        
        printf("%d %d %0.2f", high, low, (double) total / STUDENTS);
    }
    printf("\n");

    return 0;
}
