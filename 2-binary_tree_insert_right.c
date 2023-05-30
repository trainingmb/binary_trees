#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the
 * right-child of another node
 * @parent: The parent node or NULL for empty tree
 * @value: Value to be stored in new node
 * Return: NULL if failed else pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->parent = parent;
	if (parent != NULL)
	{
		if (parent->right == NULL)
		{
			parent->right = newnode;
			newnode->right = NULL;
		}
		else
		{
			newnode->right= parent->right;
			newnode->right->parent = newnode;
			parent->right = newnode;
		}
	}

	return (newnode);
}
