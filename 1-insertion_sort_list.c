#include "sort.h"

void change(listint_t *lab, listint_t *fab, listint_t **head)
{
    lab->next = fab->next;
    if (fab->next != NULL)
        fab->next->prev = lab;

    fab->next = lab;

    fab->prev = lab->prev;
    if (lab->prev != NULL)
        lab->prev->next = fab;
    else
        *head = fab;

    lab->prev = fab;
}

void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list, *back;
    if (*list == NULL || (*list)->next == NULL)
    {
        return;
    }
    while (current)
    {
        back = current;
        current = current->next;
        while (back)
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
