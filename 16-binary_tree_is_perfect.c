#include "binary_trees.h"

/**
 * binary_tree_height - Function measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree is not NULL, otherwise 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (l_height > r_height ? l_height : r_height);
}

/**
 * binary_tree_node_count - Counts the number of nodes in a binary tree.
 * @tree: The  pointer to the binary tree to count.
 *
 * Return: The number of nodes in the binary tree.
 */
size_t binary_tree_node_count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_node_count(tree->left) +
			binary_tree_node_count(tree->right));
}

/**
 * binary_tree_is_perfect - Function checks if a binary tree is perfect.
 * @tree: The pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_node_count(tree) ==
			(1 << (binary_tree_height(tree) + 1)) - 1);
}
