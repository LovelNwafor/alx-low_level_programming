i#include "lists.h"

/**
 * print_listint_safe - Prints a list, avoiding loops.
 * @head: Points to the start of the list.
 * Return: Number of nodes in size_t or exits with code 98.
 */
size_t print_listint_safe(const listint_t *head)
{
    /* Declarations */
    size_t nodeCount = 0;

    /* Check for null pointer */
    while (head)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        nodeCount += 1;

        if (head > head->next)
        {
            head = head->next;
        }
        else
        {
            head = head->next;
            printf("-> [%p] %d\n", (void *)head, head->n);
            break;
        }
    }

    return (nodeCount);
}

