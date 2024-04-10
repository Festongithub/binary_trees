#include "binary_trees.h"

/**
 * *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second
 * Return: Always 0
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *m, *p;

	if (!first || !second)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	m = first->parent, p = second->parent;

	if (m == first->parent || !m || (!m->parent && p))
		return (binary_trees_ancestor(p, first));
	else if (p == second->parent || !p || (!p->parent && m))
		return (binary_trees_ancestor(m, second));

	return (binary_trees_ancestor(m, p));
}
