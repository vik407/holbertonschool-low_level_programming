#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: array being searched every time it changes
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, mid, start, end;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[i]);

		mid = (start + end) / 2;
		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
