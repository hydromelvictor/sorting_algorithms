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

void cocktail_sort_list(listint_t **list)
{
    int ech;
    listint_t *start = *list, *end, *i;
    
    if (*list == NULL || (*list)->next == NULL)
        return;

    for (end = start; end->next !=  NULL; end = end->next);

    do
    {
        ech = 0;
        for (i = start; i->next != end; i = i->next)
        {
            if (i->n > i->next->n)
            {
                change(i, i->next, list);
                print_list(*list);
                ech = 1;
            }
        }
    } while (ech == 1);
}
