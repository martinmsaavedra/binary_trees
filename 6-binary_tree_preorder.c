#include "binary_trees.h"

/**
  * binary_tree_preorder - print the numbers in a preorder transversal
  * @tree: tree to go through
  * @func: pointer to function that uses when checking each node
  */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *ref = tree;

	if (tree == NULL || func == NULL)
		return;

	func(ref->n);
	binary_tree_preorder(ref->left, func);
	binary_tree_preorder(ref->right, func);
}
