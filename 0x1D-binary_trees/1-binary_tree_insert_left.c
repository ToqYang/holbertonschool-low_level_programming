#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node towards the left-child
 * @parent: Store address of the node
 * @value: Integer to store
 * Return: Node with the insert to the left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	/** Make a new node */
	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);
	/** The left of the new node is equal to parent of left */
	new->left = parent->left;
	/** The left of the root will be the new node */
	parent->left = new;

	/** The new left-node parent will be the new node */
	if (new->left != NULL)
		new->left->parent = new;

	return (new);
}
