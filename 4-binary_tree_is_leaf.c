#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a
 * leaf
 * @node: Node to check
 * Return: If node is leaf returns 1 otherwise
 * return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
	{
		return (1);
	}
	return (0);
}
