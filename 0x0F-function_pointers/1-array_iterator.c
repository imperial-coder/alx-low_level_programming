#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter on each
 * element of an array.
 * @array: array to work with
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (!array || !action)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
