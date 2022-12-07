#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    // Add first node
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;

    // Add second node
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list); // Free previous node
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n; // Assign second node

    // Add third node
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list->next); // Free previous two nodes
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n; // Assign third node

    // Print out the number in each node
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    // Free each node in the list, one-by-one
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}