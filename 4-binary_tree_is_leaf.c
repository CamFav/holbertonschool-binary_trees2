#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that inserts a node as the left-child
 * of another node.
 * @node: pointer to node to check
 *
 * Return: Always 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
