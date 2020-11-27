#include "binary_trees.h"

/**
*
*
*
*
*
*
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = height(tree);
	int x;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	for (x = 0; x <= h; x++)
	{
		func_level(tree, x, func);
	}

}

/**
 * height - gets the height of a tree
 *
 * @tree: tree to get the height from
 *
 * Return: height of the tree
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
		return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * max - get the max number between two
 *
 * @a: int
 * @b: int
 *
 * Return: ax between a and b
 */
int max(int a, int b)
{
	return ((a >= b) ? a : b);
}

void func_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (level == 0)
	{
		func(tree->n);
	}
	else
	{
		func_level(tree->left, level - 1, func);
		func_level(tree->right, level - 1, func);
	}
}