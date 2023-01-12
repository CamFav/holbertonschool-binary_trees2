#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to meaasure the height.
 *
 * Return: Always 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_depth(tree->left);
	right_height = binary_tree_depth(tree->right);

	if (left_height < right_height)
		return (left_height - 1);

	return (right_height - 1);
}
