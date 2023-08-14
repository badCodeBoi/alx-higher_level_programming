#include "lists.h"
/**
* check_cycle - checks if a linked list has a cycle in it.
* @list: pointer to start of the node
* Return: 0 if no cycle, 1 if there's a cycle
*/
int check_cycle(listint_t *list)
{
listint_t *slow, *fast;
if (list == NULL || list->next == NULL)
return (0);
slow = list;
fast = list->next;
while (fast != NULL && fast->next != NULL)
{
if (slow == fast)
return (1);
slow = slow->next;
fast = fast->next->next;
}
return (0);
}
