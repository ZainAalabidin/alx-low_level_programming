#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in an array of integers using
 * the interpolation search search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of value if found, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos;
	int low = 0;
	int high = (int) size - 1;

	if (!array || size <= 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
