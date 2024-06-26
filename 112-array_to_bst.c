#include "binary_trees.h"

/**
 * *array_to_bst -  builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of element in the array
 * Return: Always 0
 **/

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}
	return (NULL);
}
