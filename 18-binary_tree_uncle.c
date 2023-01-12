#include "binary_trees.h"
/**
 * binary_tree_uncle - function return a pointer to the uncle node.
 * @node: pointer to the branch of tree or leaves
 *
 *
 * Return: uncle node or NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *top;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	top = node->parent->parent;

	if (top->left && top->left->n == node->parent->n)
		return (top->right);
	else if (top->right && top->right->n == node->parent->n)
		return (top->left);

	return (NULL);
}
