#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list, *back, *tmp;
    if (*list == NULL || (*list)->next == NULL)
    {
        return;
    }
}
