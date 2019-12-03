#include "binary_trees.h"

/**
 * binary_tree_delete - Delete entire tree
 * @tree: Tree with all binary
 * Return: Delete entire tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		/** Recursion to delete */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		/** Free the tree */
		free(tree);
	}
}
