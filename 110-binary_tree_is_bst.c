#include "binary_trees.h"

/**
 * isBST - Check if a binary tree is a BST
 * @tree: root of the tree
 * @left: left node
 * @right: right node
 * Return: 1 if is BST 0 is not
 **/

int isBST(const bt *tree, const bt *left, const bt *right)
{
	if (tree == NULL)
		return (1);

	if (left != NULL && tree->n <= left->n)
		return (0);
	if (right != NULL && tree->n >= right->n)
		return (0);

	return (isBST(tree->left, left, tree) && isBST(tree->right, tree, right));
}

/**
 * binary_tree_is_bst - Check if a binary tree is a BST
 * @tree: root of the tree
 * Return: 1 if is BST 0 is not
 **/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;

	if (tree == NULL)
		return (0);

	return (isBST(tree, left, right));
}
