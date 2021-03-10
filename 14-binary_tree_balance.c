#include "binary_trees.h"

/**
  * binary_tree_balance - check balance of tree
  * @tree: tree to check
  * Return: balance int
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int count_left = 0;
	int count_right = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count_left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		count_right = binary_tree_height(tree->right);

	balance = count_left - count_right;
	return (balance);
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

	count_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	count_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (count_left > count_right ? count_left : count_right);
}
