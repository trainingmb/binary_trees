#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the tree to measure
 * Return: The Height of the tree or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;
	if (tree)
	{
		r = binary_tree_height(tree->right);
		l = binary_tree_height(tree->left);
		if (r == 0 && l == 0)
			return (0);
		return ((r > l? r : l) + 1);
	}
	return (0);
}
