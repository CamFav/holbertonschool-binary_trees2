#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to meaasure the height.
 *
 * Return: Always 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		binary_tree_depth(tree->parent);
	}
	return (depth);
}
