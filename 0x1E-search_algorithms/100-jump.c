#include <math.h>
#include "search_algos.h"

/**
 * jump_search - This Searches for a value in a sorted array using a jump search.
 * @array: signifies the array to search in.
 * @size: signifies the length of the array.
 * @value: signifies the value to look for.
 *
 * Return: Returns the index of the value in the array, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, a = 0, b = 0;

	if (!array)
		return (-1);
	step = (size_t)sqrt(size);
	while ((b < size) && (*(array + b) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)b, *(array + b));
		a = b;
		b += step;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	b = b >= size ? size - 1 : b;
	for (; (a <= b) && (*(array + a) <= value); a++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, *(array + a));
		if (*(array + a) == value)
			return ((int)a);
	}
	return (-1);
}
