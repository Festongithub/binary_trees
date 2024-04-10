#include "binary_trees.h"
#include <limits.h>
/**
 * check_if_is_bst - checks if binary tree is BST
 * @tree: pointer to the node
 * @min: minimum value
 * @max: maximum value
 * Return: Always 0
 **/

int check_if_is_bst(const binary_tree_t *tree, int  min, int max)
{
	if (tree != NULL)
	{
		if (tree->n < min || tree->n > max)
			return (0);

		return (check_if_is_bst(tree->left, min, tree->n - 1) &&
				check_if_is_bst(tree->right, tree->n + 1, max));
	}
	return (1);
}


/**
 * binary_tree_is_bst - checks if binary tree is bst
 * @tree: pointer to the node
 * Return: Always 0
 **/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_if_is_bst(tree, INT_MIN, INT_MAX));
}
