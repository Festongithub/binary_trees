#include "binary_trees.h"

/**
 * binary_tree_height - measures height of the binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: Always 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((l > r) ? l : r);
}
