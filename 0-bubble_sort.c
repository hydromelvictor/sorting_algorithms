#include "sort.h"

/**
 * bubble_sort - sort bubble
 * @array: array of integer
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j, n;
    int tmp;
    if (array == NULL || size < 2)
    {
        return;
    }
    for (i = 0; i < size; i++)
    {
        n = size - i;
        for (j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array, size);
            }
        }
    }
}
