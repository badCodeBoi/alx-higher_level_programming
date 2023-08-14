#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to the head of the linked list
 * @number: number to insert
 * Return: pointer to the new node or NULL if failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *current = *head;
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = number;

    if (*head == NULL || number < (*head)->n)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    while (current->next != NULL && current->next->n <= number)
        current = current->next;

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}

