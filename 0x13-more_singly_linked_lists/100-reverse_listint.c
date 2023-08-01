#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *next = NULL;
    while (*head)
    {
        listint_t *temp = (*head)->next;
        (*head)->next = next;
        next = *head;
        *head = temp;
    }
    *head = next;
    return (*head);
}
