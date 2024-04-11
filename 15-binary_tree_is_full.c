#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - Function checks if a binary tree is full
 * @tree: The pointer to the root node of the tree
 *
 * Return: 1, If the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
