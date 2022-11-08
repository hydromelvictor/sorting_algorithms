#include "sort.h"

void shell_sort(int *array, size_t size)
{
int value;
size_t i, n, j;
n = 1;
while (n < size)
n = 3 * n + 1;

n = n / 3;
while (n != 0)
{
for (i = n; i < size; i++)
{
value = array[i];
j = i;
while ((j > n - 1) && array[j - n] > value)
{
array[j] = array[j - n];
j = j - n;
}
array[j] = value;
}
print_array(array, size);
n = n / 3;
}
}
