#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: pointer to parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: Always 0.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = malloc(sizeof(binary_tree_t));

	if (!tempNode)
		return (NULL);

	tempNode->left = tempNode->right = NULL;
	tempNode->n = value;
	tempNode->parent = parent;

	return (tempNode);
}
