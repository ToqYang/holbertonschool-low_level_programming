#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Store the pointer to the check
 * Return: 1 if the node is the root, 0 if not is
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/** Verify if the node parent is null if is null return 1 */
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
