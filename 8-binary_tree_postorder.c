#include "binary_trees.h"

/**
 * binary_tree_postorder - checks if a node is a leaf
 *
 * @tree: node to be checked
 * @func: pointer to function
 * Return: 1 if node is a leaf. 0 otherwise or in case of error
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
