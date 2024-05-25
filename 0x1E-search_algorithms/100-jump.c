#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array of integers using
 * the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (jump < size && i < size)
	{
		if (array[jump] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += (int)sqrt(size);
	}
	printf("found between indexes [%ld] and [%li]\n", i, jump);

	while (i < size && i <= jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
