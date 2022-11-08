#include "sort.h"

void change(listint_t *back, listint_t *nexter, listint_t **head)
{
    back->next = nexter->next;
    if (nexter->next != NULL)
        nexter->next->prev = back;
    
    nexter->prev = back->prev;
    if (back->prev != NULL)
        back->prev->next = nexter;
    else
        *head = nexter;
}

void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list, *back;
    if (*list == NULL || current->next == NULL)
    {
        return;
    }
    while (current != NULL)
    {
        back = current;
        current = current->next;
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
