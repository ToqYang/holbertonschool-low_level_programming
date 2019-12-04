#include "binary_trees.h"

/**
 * binary_tree_inorder - Print in mode inorder in recursion
 * @tree: Binary tree
 * @func: Function to pointer
 * Return: Binary tree in inorder
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);

		func(tree->n);

		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
