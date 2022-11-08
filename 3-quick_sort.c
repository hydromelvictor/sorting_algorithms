#include "sort.h"

void swap(int *array, int i, int j)
{
    int tmp;
    tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

int part(int *array, size_t size, int p, int r)
{
    int pivot = array[r], i = p - 1, j;
    for (j = p; j < r; j++)
    {   
        if (array[j] <= pivot)
        {
            i++;
            swap(array, i, j);
            if (j != i)
                print_array(array, size);
        }
    }
    i++;
    swap(array, i, r);
    if (j != i)
        print_array(array, size);
    return (i);
}

void sort(int *array, size_t size, int p, int r)
{
    int pivot;
    if (p >= r || p < 0)
        return;

    pivot = part(array, size, p, r);
    sort(array, size, p, pivot - 1);
    sort(array, size, pivot + 1, r);
}

void quick_sort(int *array, size_t size)
{
    sort(array, size, 0, size - 1);
}
