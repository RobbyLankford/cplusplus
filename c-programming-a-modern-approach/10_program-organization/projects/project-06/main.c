/* Implement Reverse Polish Notation */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char c, op1, op2;

    while (true)
    {
        printf("Enter an RPN expression: ");
        while ((c = getchar()) != '\n')
        {
            if (isdigit(c))
                push(c - '0');
            else
            {
                switch(c)
                {
                    case '+': 
                        push(pop() + pop());

                        break;

                    case '-':
                        op2 = pop();
                        op1 = pop();
                        push(op1 - op2);

                        break;
                    
                    case '*':
                        push(pop() * pop());

                        break;
                    
                    case '/':
                        op2 = pop();
                        op1 = pop();
                        push(op1 / op2);

                        break;
                    
                    case '=':
                        printf("Value of expression: %d\n", pop());

                        break;
                    
                    case ' ':
                        break;
                    
                    default:
                        exit(EXIT_FAILURE);
                }
            }
        }
    }

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = c;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("\nExpression is too complex.\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nNot enough operands in expression.\n");
    exit(EXIT_FAILURE);
}