#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node towards the right-child
 * @parent: Store address of the node
 * @value: Integer to store
 * Return: Node with the insert to the right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new = NULL;

        if (parent == NULL)
                return (NULL);

        /** Make a new node */
        new = binary_tree_node(parent, value);

        /** The left of the new node is equal to parent of right */
        new->right = parent->right;
        /** The left of the root will be the new node */
        parent->right = new;

        /** The new left-node parent will be the new node */
        if (new->right != NULL)
                new->right->parent = new;

        return (new);
}
