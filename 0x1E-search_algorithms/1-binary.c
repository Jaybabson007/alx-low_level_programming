#include "search_algos.h"

/**
 * binary_search - A function that searches for array value in array sorted array
 * of integers using Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: This returns the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index - A recursive function for helping binary_search.
 * @array: A pointer to the first element of the array to search in.
 * @l: The left index of array.
 * @r: The right index of array.
 * @value: The value to look for.
 *
 *
 * Return: This returns the index where value is located.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int mid;

	/* if l is greater than r, it means the element is not in the array */
	if (!array || l > r)
		return (-1);
	print_array(array, l, r);

	/* To find the mid-way index between index l and index r */
	mid = l + (r - l) / 2;

	if (l == r)
		return (*(array + mid) == value ? (int)mid : -1);

	/* in a case where we've found the element at the mid-way index, then return the index */
	if (array[mid] == value)
		return (mid);
	/**
	 * otherwise, if the element MUST be in the left-portion of the portion of the
	 * array we are currently looking at, then search for it in this portion
	 */
	else if (array[mid] > value)
		return (binary_search_index(array, l, mid - 1, value));
	/**
	 * otherwise, if the element MUST be in the right-portion of the portion of the
	 * array we are currently looking at, then search for it in this portion
	 */
	else
		return (binary_search_index(array, mid + 1, r, value));
}

/**
 * print_array - This Prints an array of integers.
 * @array: array to be printed.
 * @l: left index of the array.
 * @r: right index of the array.
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
