#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary
 * tree
 * @tree: Pointer to the roor node of the measure
 * of size
 * Return: Size of tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	r = binary_tree_size(tree->right);
	l = binary_tree_size(tree->left);
	return (r + l + 1);
}
