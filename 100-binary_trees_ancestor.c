#include "binary_trees.h"


/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: POinter to ancestor otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	const binary_tree_t *ph1, *ph2;

	if (!first || !second)
		return (NULL);
	for (ph1 = first; ph1; ph1 = ph1->parent)
	{
		for (ph2 = second; ph2; ph2 = ph2->parent)
		{
			if (ph1 == ph2)
				return (ph1->left ? ph1->left->parent :
						ph1->right->parent);
		}
	}
	return (NULL);
}
