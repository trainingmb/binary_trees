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

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->right = NULL;
	newnode->parent = parent;
	if (parent != NULL)
	{
		if (parent->left == NULL)
		{
			parent->left = newnode;
			newnode->left = NULL;
		}
		else
		{
			newnode->left = parent->left;
			newnode->left->parent = newnode;
			parent->left = newnode;
		}
	}

	return (newnode);
}
