#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - Function counts the leaves in a binary tree
 * @tree: The pointer to the root node of the treeto count
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves = 0;
	size_t r_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l_leaves = tree->left ? binary_tree_leaves(tree->left) : 0;
	r_leaves = tree->right ? binary_tree_leaves(tree->right) : 0;

	return (l_leaves + r_leaves);
}
