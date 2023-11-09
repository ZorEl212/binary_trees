#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a given node is a leaf or not
 * @node: node to check
 *
 * Return: 1 - if the node is a leaf
 * 0 - if it's not a leaf or the node is null.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->parent && (!node->left && !node->right))
		return (1);
	return (0);
}
