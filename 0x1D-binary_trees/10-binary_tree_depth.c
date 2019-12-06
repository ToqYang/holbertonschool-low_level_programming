#include "binary_trees.h"

/**
 * binary_tree_depth - Depth of tree
 * @tree: Pointer to the node
 * Return: Number of the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		depth_tree = 1 + binary_tree_depth(tree->parent);

	return (depth_tree);
}
