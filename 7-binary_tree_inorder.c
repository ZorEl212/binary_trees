#include "binary_trees.h"

/**
* binary_tree_inorder - traverse a binary tree in in-order
* @tree: the binary tree
* @func: a function pointer pointing to a function that takes int
* as parameter. (This is a function used to print the value in a given node)
*
* Return: Nothing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
