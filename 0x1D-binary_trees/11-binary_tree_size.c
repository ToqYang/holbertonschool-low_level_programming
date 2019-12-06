#include "binary_trees.h"

/**
 * binary_tree_size - Find the size of the tree
 * @tree: Pointer to the node
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizel = 0, sizer = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		sizel = binary_tree_size(tree->left);
	if (tree->right != NULL)
		sizer = binary_tree_size(tree->right);

	return ((sizel + sizer) + 1);
}
