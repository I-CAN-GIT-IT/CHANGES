#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: pointer to the parent of the binary tree
 * @value: data of the new tree
 *
 * Return: pointer to the root node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (value == '\0')
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
		return (NULL);
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	temp->n = value;
	return (temp);
}
