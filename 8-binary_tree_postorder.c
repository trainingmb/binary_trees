#include "binary_trees.h"


/**
 * binary_tree_postorder:goes through a binary
 * tree using post-order traversal
 * @tree: the tree to transverse
 * @func: the printing function
 * Return: Void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
}
