#include "binary_trees.h"



/**
 * bth - Measures the height of a binary tree
 * @tree: the tree to measure
 * Return: The Height of the tree or NULL
 */
size_t bth(const binary_tree_t *tree)
{
	size_t l;
	size_t r;
	if (tree)
	{
		r = bth(tree->right);
		l = bth(tree->left);
		return ((r > l? r : l) + 1);
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the tree to measure
 * Return: The Height of the tree or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (bth(tree) - 1);
}

