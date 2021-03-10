#include "binary_trees.h"

/**
  * binary_tree_inorder - print the numbers in a in-order transversal
  * @tree: tree to go through
  * @func: pointer to function that uses when checking each node
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *ref = tree;

	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(ref->left, func);
	func(ref->n);
	binary_tree_inorder(ref->right, func);
}
