#include "search_algos.h"
/**
 * exponential_search - Searches for a value in an array of integers using
 * the interpolation search search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int index, prev;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	for (index = 1; index <= (int) size; index = index * 2)
	{
		if (value <= array[index])
			break;
		prev = index;
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
	}
	if (index >= (int) size)
		index = (int) size - 1;
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	index = binary_search(array + prev, index - prev + 1, value);
	if (index < (int) size && index >= 0)
		return (index + prev);
	else
		return (-1);
}

/**
 * binary_search - a function that searches for a value in an array
 * of integers using the binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of number if found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t M_index;
	size_t S_index = 0;
	size_t E_index = size - 1;


	if (!array || size == 0)
		return (-1);
	while (S_index <= E_index)
	{
		M_index = S_index + (E_index - S_index) / 2;
		printf("Searching in array: ");
		print_array(array, S_index, E_index);
		if (array[M_index] == value)
		{
			return (M_index);
		}
		else if (array[M_index] < value)
			S_index = M_index + 1;
		else
			E_index = M_index - 1;
	}
	return (-1);
}

/**
 * print_array - function print Elements of the array
 * @array: the given array
 * @S_index: the start of array
 * @E_index: the end of array
 * Return: the Element of array
*/
void print_array(int *array, int S_index, int E_index)
{
	int index;

	for (index = S_index; index <= E_index; index++)
	{
		printf("%d", array[index]);
		if (index < E_index)
		{
			printf(", ");
		}
	}
	printf("\n");
}

