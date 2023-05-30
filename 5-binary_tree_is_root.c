#include "binary_trees.h"


/**
 * binary_tree_is_root: Checks if a given node
 * is a root
 * @node: The Node to check
 * Return: 1 if node is root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
	{
		return (1);
	}
	return (0);
}