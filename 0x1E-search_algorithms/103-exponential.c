#include "search_algos.h"

/**
 * print_array - This function Prints the contents of an array.
 * @array: signifies the source of the array to print.
 * @l: signifies the left index of the array.
 * @r: signifies the right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index1 - This function searches a value in a sorted array using
 * a binary search.
 * @array: Signifies the array to search in.
 * @l: left index of the array.
 * @r: right index of the array.
 * @value: signifies the value to look for.
 *
 * Return: returns the first index of the value in the array, else it returns -1.
 */
int binary_search_index1(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		return (binary_search_index1(array, l, m - 1, value));
	}
	else if (value == *(array + m))
	{
		return ((int)m);
	}
	else
	{
		return (binary_search_index1(array, m + 1, r, value));
	}
}

/**
 * exponential_search - This function searches a value in a sorted array using
 * an exponential search.
 * @array: array to search in.
 * @size: length of the array.
 * @value: value to look for.
 *
 * Return: returns the index of the value in the array, else it returns -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 1, high = 2;

	if (!array || !size)
		return (-1);
	if (size < 2)
	{
		low = 0;
		high = 1;
	}
	else
	{
		while (low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (
				((array[low] <= value) && (array[high] >= value))
				|| ((low * 2) >= size)
				)
				break;
			low *= 2;
			high = high * 2 < size ? high * 2 : size - 1;
		}
	}
	printf("The Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_index1(array, low, high, value));
}
