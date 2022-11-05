#include "sort.h"

int partition(int *array, size_t size, int lo, int hi)
{
    int x = array[hi], tmp, i = lo, j;

    for (j = lo; j < hi; j++)
    {
        if (array[j] < x)
        {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            i++;
        }
    }

    tmp = array[i];
    array[i] = array[hi];
    array[hi] = tmp;
    print_array(array, size);
    return (i);
}

void sorting(int *array, size_t size, int lo, int hi)
{
    int i;
    if (lo < hi)
    {
        i = partition(array, size, lo, hi);
        sorting(array, size, lo, i - 1);
        sorting(array, size, i + 1, hi);
    }
}

void quick_sort(int *array, size_t size)
{
    sorting(array, size, 0, size);
}
