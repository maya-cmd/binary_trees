#include "binary_trees.h"
/**
 * binary_tree_uncle - Function finds the uncle of a node
 * @node: The pointer to node that finds the uncle
 * Return: The pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->parent)
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	else
		return (NULL);
}
