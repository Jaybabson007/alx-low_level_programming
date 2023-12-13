#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of
 * integers using  Linear search algorithm.
 * @array: The pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * If the value is not present in array or if array is NULL return -1.
 *
 * Return: returns the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
