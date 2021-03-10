#include "binary_trees.h"

/**
  * binary_tree_nodes - count the leves
  * @tree: tree to check
  * Return: the count of leaves
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		count += binary_tree_nodes(tree->right);
	return (tree->left == NULL && tree->right == NULL ? count : count + 1);
}
