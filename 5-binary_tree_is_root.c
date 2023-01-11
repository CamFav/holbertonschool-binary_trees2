#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: pointer to node to check
 *
 * Return: Always 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right || node->parent != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
