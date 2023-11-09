#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree in preorder
 * @tree: the binary tree
 * @func: a function pointer pointing to a function that takes int
 * as parameter. (This is a function used to print the value in a given node)
 *
 * Return: Nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
