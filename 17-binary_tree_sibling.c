#include "binary_trees.h"
/**
 * binary_tree_sibling - function return a brother of node.
 * @node: pointer to the branch of tree or leaves
 *
 *
 * Return: brother node or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
