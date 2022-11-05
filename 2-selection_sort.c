#include "sort.h"

/**
 * selection_sort - sort by selection
 * @array: array
 * @size: size for array
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, k;
int min, n;
if (array == 0 || size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
min = array[i];
n = 0;
for (j = i + 1; j < size; j++)
{
if (min > array[j])
{
min = array[j];
k = j;
n = 1;
}
}
if (n == 1)
{
array[k] = array[i];
array[i] = min;
print_array(array, size);
}
}
}
