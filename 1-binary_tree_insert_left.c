#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of
 * another node
 * @parent: parent of the node at left-insert
 * @value: value of the new node
 * Return: updated tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft = NULL;

	if (!parent)
		return (NULL);

	newLeft = malloc(sizeof(binary_tree_t));
	if (!newLeft)
		return (NULL);
	newLeft->n = value;
	newLeft->right = NULL;
	newLeft->left = NULL;

	newLeft->parent = parent;
	if (parent->left)
	{
		newLeft->left = parent->left;
		newLeft->left->parent = newLeft;
	}
	parent->left = newLeft;
	return (newLeft);
}
