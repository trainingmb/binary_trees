#include "binary_trees.h"

/**
 * sibling - finds the sibling of a node
 * @node: Node for whom the sibling we seek
 * Return: Pointer to sibling or NULL
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Pointer to node to find uncle
 * Return: Uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (sibling(node->parent));
}
