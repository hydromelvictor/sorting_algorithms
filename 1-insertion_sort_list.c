#include "sort.h"

/**
 * change - swap function
 * @back: back
 * @nexter: next
 * @head: header
*/
void change(listint_t *back, listint_t *nexter, listint_t **head)
{
back->next = nexter->next;
if (nexter->next != NULL)
nexter->next->prev = back;

nexter->next = back;
nexter->prev = back->prev;
if (back->prev != NULL)
back->prev->next = nexter;
else
*head = nexter;

back->prev = nexter;
}

/**
 * insertion_sort_list - sort insertion
 * @list: list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current = *list, *back;
if (*list == NULL || current->next == NULL  || list == NULL)
{
return;
}
while (current != NULL)
{
back = current;
current = current->next;
if (current != NULL)
{
while (back != NULL)
{
if (back->n > current->n)
{
change(back, current, list);
print_list(*list);
}
back = back->prev;
}
}
}
}
