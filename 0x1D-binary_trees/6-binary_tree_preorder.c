#include "binary_trees.h"

/**
 * binary_tree_preorder - Print the pre order
 * @tree: Binary tree
 * @func: Function to pointer
 * Return: Binary tree in preorder
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);

		if (tree->left)
			binary_tree_preorder(tree->left, func);

		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
