#include "binary_trees.h"

/**
 * binary_tree_leaves - Find the number of leaves of the tree
 * @tree: Pointer to the node
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sizel = 0, sizer = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		sizel = binary_tree_leaves(tree->left);
		sizer = binary_tree_leaves(tree->right);
	}
	else
		return (1);

	return (sizel + sizer);
}
