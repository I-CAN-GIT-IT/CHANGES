#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf
 * node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (!node)
		return (leaf);
	if (!node->left && !node->right)
		leaf = 1;
	return (leaf);
}
