#include "binary_trees.h"


/**
 * bth - Measures the height of a binary tree
 * @tree: the tree to measure
 * Return: The Height of the tree or NULL
 */
int bth(const binary_tree_t *tree)
{
	int l;
	int r;

	if (tree)
	{
		r = bth(tree->right);
		l = bth(tree->left);
		return ((r > l ? r : l) + 1);
	}
	return (0);
}


/**
 * leaves - counts the leaves in a binary
 * tree
 * @tree: pointer to the root node of the tree to
 * count the number of leaves
 * Return: Number of leaves of (0)
 */
int leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}

/**
 * poow: Raise a to power b
 * @a: A
 * @b: B
 * Return: a**b;
 */
int poow(int a, int b)
{
	int result;

	result = 1;
	while(b)
	{
		result *= a;
	}
	return (result);
}


/**
 * binary_tree_is_perfect - checks if a binary tree
 * is perfect
 * @tree: pointer to the root node of the tree to
 * check
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lvs;
	int height;

	if (!tree)
		return (0);
	lvs = leaves(tree);
	height = bth(tree) - 1;

	return (lvs == poow(2, height));
}
