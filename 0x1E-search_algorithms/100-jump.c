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
	int i = 0;
	int jump = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (jump < (int)size && i < (int)size)
	{
		if (array[jump] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += (int)sqrt(size);
	}
	printf("found between indexes [%d] and [%i]\n", i, jump);

	while (i < (int)size && i <= jump)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
