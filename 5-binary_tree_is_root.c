#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: a pointer to the node to check
 * Return: Always 0
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
