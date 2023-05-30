#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the
 * left-child of another node
 * @parent: The parent node or NULL for empty tree
 * @value: Value to be stored in new node
 * Return: NULL if failed else pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent != NULL)
	{
		parent->left = newnode;
	}
	newnode->n = value;
	return (newnode);
}
