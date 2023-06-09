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
 * binary_tree_balance - measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the balance factor
 * Return: Balance factor otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bth(tree->left) -
			bth(tree->right));
}
