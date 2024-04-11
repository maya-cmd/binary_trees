#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Function measures the size of a binary tree
 * @tree: The pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, or 0 if tree is NUll
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size = 0;
	size_t r_size = 0;

	if (tree == NULL)
		return (0);

	l_size = tree->left ?  binary_tree_size(tree->left) : 0;
	r_size = tree->right ?  binary_tree_size(tree->right) : 0;

	return (l_size + r_size + 1);
}
