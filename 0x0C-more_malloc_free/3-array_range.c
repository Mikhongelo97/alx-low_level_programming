#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 *
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
int *a, i = 0;
if (min > max)
return (NULL);
a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
return (NULL);
while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}
