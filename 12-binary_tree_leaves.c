#include "binary_trees.h"

/**
  * binary_tree_leaves - count the leaves in a tree
  * @tree: tree to check
  * Return: the number of leaves
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

		count += binary_tree_leaves(tree->right);
		count += binary_tree_leaves(tree->left);

	return (tree->left == NULL && tree->right == NULL ? count + 1 : count);
}
