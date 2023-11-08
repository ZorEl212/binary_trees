#include "binary_trees.h"

/**
* binary_tree_insert_right - inset a right node in a tree
* @parent: parent node
* @value: value that the new node holds
*
* Return: The new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (!parent)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (!child)
		return (NULL);
	if (parent->right)
	{
		child->right = parent->right;
		child->right->parent = child;
	}
	parent->right = child;

	return (child);
}
