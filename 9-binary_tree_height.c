#include "binary_trees.h"

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
