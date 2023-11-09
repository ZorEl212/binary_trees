#include "binary_trees.h"

/**
 * binary_tree_is_root - chech if a node is a root node
 * @node: Node to check
 *
 * Return: 1 - the node is root node
 * 0 - otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
