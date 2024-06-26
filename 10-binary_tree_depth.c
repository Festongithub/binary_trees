#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of binary tree
 * @tree:  pointer to the node to measure the depth
 * Return: Always 0
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
