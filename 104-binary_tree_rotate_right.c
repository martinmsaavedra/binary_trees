#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: root of the tree
 * Return: the new root of the tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *y = NULL, *x = NULL;

	if (!tree || tree->left == NULL)
		return (NULL);

	y = tree->left;
	if (tree->left->right != NULL)
		x = tree->left->right;

	tree->parent = y;
	tree->left = x;
	y->parent = NULL;
	y->right = tree;

	return (y);
}
