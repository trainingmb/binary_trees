#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node
 * in a binary tree
 * @tree: Pointer to the node to measeure depth
 * Return: Depth of node otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;
	binary_tree_t *cnode;

	if (tree == NULL)
		return (0);
	d = 0;
	cnode = tree->parent;
	while (cnode)
	{
		cnode = cnode->parent;
		d++;
	}
	return (d);
}
