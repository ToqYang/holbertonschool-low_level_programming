#include "binary_trees.h"

/**
 * binary_tree_height - Recursion to find the height of the tree
 * @tree: Pointer of the node
 * Return: Number of the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);
	if (right > left)
		return (right);
	else
		return (left);
}
