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
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);



	if (node->parent->parent->left->n == node->parent->n)
		return (node->parent->parent->right);
	else if (node->parent->parent->right->n == node->parent->n)
		return (node->parent->parent->left);

    return (NULL);
}
