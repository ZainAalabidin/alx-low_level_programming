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
	size_t i;
	size_t jump = sqrt(size);

	if (!array || array == NULL)
		return (-1);

	for (i = 0; i < size; i = i + jump)
	{
		if (array[i] == value)
			break;
		else if (array[i] < value)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			continue;
		}
		else
			break;
	}
	printf("found between indexes [%li] and [%li]\n", i - (int)jump, i);

	for (i = i - jump; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
