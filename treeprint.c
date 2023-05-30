#include "binary_trees.h"


/**
 * treeprint: Print a binary tree
 * @root: The root node
 * @level: The level to start at
 * Return: Void
 */
void treeprint(binary_tree_t *root, int level)
{
	if (root == NULL)
		return;
	for (int i = 0; i < level; i++)
		printf(i == level - 1 ? "|-" : "  ");
	printf("%d\n", root->n);
	treeprint(root->left, level + 1);
	treeprint(root->right, level + 1);
}
