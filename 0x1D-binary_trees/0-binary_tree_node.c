#include "binary_trees.h"

/**
 * binary_tree_node - Make a binary node
 * @parent: Pointer to the parent of the node
 * @value: Data to store
 * Return: The new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
