#include "binary_trees.h"

/**
 * binary_tree_postorder - Print in mode postorder in recursion
 * @tree: Binary tree
 * @func: Function to pointer
 * Return: Binary tree in postorder
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);

		if (tree->right)
			binary_tree_postorder(tree->right, func);

		func(tree->n);
	}
}
