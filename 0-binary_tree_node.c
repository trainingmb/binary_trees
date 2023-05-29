#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: The parent node or NULL for empty tree
 * @value: Value to be stored in new node
 * Return: NULL if failed else pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		parent = newnode;
	}
	newnode->n = value;
	return (newnode);
}
