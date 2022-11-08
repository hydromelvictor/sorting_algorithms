#include "sort.h"
void knuth(int *gap, int n)
{
    int i;
    for( i = 0; gap[i] < n; i++)
    {
        if (i == 0)
            gap[i] = 0;
        else
            gap[i] = gap[i - 1] * 3 + 1;
    }
}

void shell_sort(int *array, size_t size)
{
size_t i, j, r;
int x, *gap = NULL, m;
if (array == NULL || size < 2)
{
    return;
}
knuth(gap, size);
for (m = 0; (gap[m] =! '\0'); m++);
m = m - 1;
for (; m >= 0; m--)
{
    for (r = 0; r < (unsigned int)gap[m]; r++)
    {
        for (i = gap[m] + r; i < size; i += (unsigned int)m)
        {
            j = i;
            x = array[i];
            while (j > r && array[j - gap[m]] > x)
            {
                array[j] = array[j - gap[m]];
                j = j - gap[m];
            }
            array[j] = x;
        }
        print_array(array, size);
    }
}
}
