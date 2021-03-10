#include "binary_trees.h"

/**
  * binary_tree_is_perfect - check if binary tree is perfect
  * @tree: tree to check
  * Return: 1 if perfect, 0 if not
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size = 0; /*ideal size*/
	size_t height = 0; /*height for algorithm*/
	size_t real_size = 0; /*real count of nodes*/

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	size = (size_t)_pow_recursion(2, height + 1) - 1;
	real_size = binary_tree_size(tree);

	if (size != real_size)
		return (0);
	return (1);
}

/**
  * binary_tree_size - count the nodes in the tree
  * @tree: tree to check
  * Return: count of nodes
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
  * binary_tree_height - get the height of a tree
  * @tree: tree to go through
  * Return: count
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	count_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	count_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (count_left > count_right ? count_left : count_right);
}

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: base
 *@y: power to raise
 *Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
