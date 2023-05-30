#include "binary_trees.h"


void level_print(const binary_tree_t *tree,size_t current_lvl,
				size_t target_lvl, void (*func)(int))
{
	if (!tree)
		return;
	if (current_lvl == target_lvl)
	{
		func(tree->n);
	}
	else if (current_lvl < target_lvl)
	{
		level_print(tree->left, current_lvl + 1,
					target_lvl, func);
		level_print(tree->right, current_lvl + 1,
					target_lvl, func);
	}
	else
		return;
}

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
		return ((r > l ? r : l) + 1);
	}
	return (0);
}


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, iter;

	if (!tree || !func)
		return;
	height = bth(tree);
	for (iter = 0; iter < height; ++iter)
	{
		level_print(tree, 0, iter, func);
	}
}



