#include "binary_trees.h"

/**
 * binary_tree_node - add a node in binary tree
 * @parent: Partnt node of the newly created node
 * @value: value of the new node
 *
 * Return: The new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->left = NULL;
	child->left = NULL;
	child->parent = NULL;
	if (parent)
		child->parent = parent;
	child->n = value;
	return (child);
}
