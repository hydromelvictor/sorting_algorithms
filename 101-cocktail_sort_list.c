#include "sort.h"

void cocktail_sort_list(listint_t **list)
{
    listint_t *i;
    int ech = 1;
    if (*list == NULL || (*list)->next == NULL)
        return;
    
    while(ech == 1)
    {
        ech = 0;
        for (i = *list; i->next != NULL; i = i->next)
        {
            if (i->n > i->next->n)
            {
                change(i, i->next, list);
                print_list(*list);
                ech = 1;
            }
        }
        i = i->prev;
        for (; i != NULL; i = i->prev)
        {
            if (i->n > i->next->n)
            {
                change(i, i->next, list);
                print_list(*list);
                ech = 1;
            }
        }
    }
}
