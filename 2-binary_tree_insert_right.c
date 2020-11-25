#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRight = NULL;

	if (!parent)
		return (NULL);

	newRight = malloc(sizeof(binary_tree_t));
	if (!newRight)
		return (NULL);

	newRight->n = value;
	newRight->left = NULL;
	newRight->parent = parent;
	if (parent->right)
	{
		newRight->right = parent->right;
		newRight->right->parent = newRight;
	}
	parent->right = newRight;
	return (newRight);
}
