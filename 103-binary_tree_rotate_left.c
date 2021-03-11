#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: root of the tree
 * Return: the new root of the tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y = NULL, *x = NULL;

	if (!tree)
		return (NULL);

	y = tree->right;
	if (tree->right->left != NULL)
		x = tree->right->left;

	tree->parent = y;
	tree->right = x;
	y->parent = NULL;
	y->left = tree;

	return (y);
}
