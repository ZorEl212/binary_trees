#include "binary_trees.h"

/**
* binary_tree_postorder - traverse a binary tree in in-order
* @tree: the binary tree
* @func: a function pointer pointing to a function that takes int
* as parameter. (This is a function used to print the value in a given node)
*
* Return: Nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
