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
	int array_length = (int)size;

	if (!array || array_length <= 0)
		return (-1);

	while (jump < array_length && i < array_length)
	{
		if (array[jump] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += sqrt(array_length);
	}

	printf("Found between indexes [%d] and [%d]\n", i, jump);

	jump = (jump < array_length) ? jump : array_length - 1;

	while (i <= jump && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}

	if (i >= array_length || array[i] != value)
		return (-1);

	printf("Value found at index: %d\n", i);
	return (i);
}
