#include "binary_trees.h"

/**
* binary_tree_depth - calculate depth of a binary tree
* @tree: binary tree
*
* Return: Height of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	if (!tree || (!tree->parent))
		return (0);

	node_depth = binary_tree_depth(tree->parent);

	return (1 + node_depth);
}
