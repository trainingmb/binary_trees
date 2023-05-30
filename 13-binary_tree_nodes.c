#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of nodes
 * Return: Count of Nodes otherwise NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	r = binary_tree_nodes(tree->right);
	l = binary_tree_nodes(tree->left);
	return (r + l + 1);
}
