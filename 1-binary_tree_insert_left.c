#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent to the  left-child
 * @value : value to the node
 * Return:NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

{
	if (parent == NULL)
		return (NULL);
}
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
	return (NULL);
}

if (parent->left != NULL)
{
	parent->left->parent = new_node;
	new_node->left = parent->left;
}

parent->left = new_node;

return (new_node);
}
