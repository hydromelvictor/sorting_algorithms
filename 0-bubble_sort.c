#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j, k, tmp;
    if (array != NULL)
    {
        for (i = 0; array[i] != '\0'; i++);
        if (i > 1)
        {
            for (j = 0; j < i; j++)
            {
                for (k = 0; k < i - 1; k++)
                {
                    if (array[k] > array[k + 1])
                    {
                        tmp = array[k];
                        array[k] = array[k + 1]
                        array[k + 1] = tmp;
                    }
                    print_array(array, i);
                }
            }
        }
    }
}
