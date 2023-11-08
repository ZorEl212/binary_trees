#include "binary_trees.h"

/**
* binary_tree_insert_left - inset a left node in a tree
* @parent: parent node
* @value: value that the new node holds
*
* Return: The new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (!parent)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (!child)
		return (NULL);
	if (parent->left)
	{
		child->left = parent->left;
		child->left->parent = child;
	}
	parent->left = child;

	return (child);
}
