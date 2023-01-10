#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node.
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store the new node
 *
 * Return: Always 0.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->right = newNode->left = NULL;
	newNode->n = value;
	newNode->parent = parent;

	if (parent->right)
	{
		newNode->right = parent->right;
	}
	parent->right = newNode;



	return (newNode);
}
