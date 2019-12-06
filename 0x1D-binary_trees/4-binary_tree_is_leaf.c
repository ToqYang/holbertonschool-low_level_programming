#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is leaf
 * @node: Store the node at the pointer to verify
 * Return: 1 if the node is leaf, 0 not is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/** Veify if exit some child */
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	/** If the node is leaf */
	else
		return (1);
}
