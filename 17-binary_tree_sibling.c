#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - Function finds the sibling of a node in a binary tree
 * @node: The pointer to the node to find the sibling of
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or the node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			(node->parent->left == NULL && node->parent->right == NULL))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
