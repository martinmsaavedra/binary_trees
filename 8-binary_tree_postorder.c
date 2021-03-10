#include "binary_trees.h"

/**
  * binary_tree_postorder - print the numbers in a in-order transversal
  * @tree: tree to go through
  * @func: pointer to function that uses when checking each node
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *ref = tree;

	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(ref->left, func);
	binary_tree_postorder(ref->right, func);
	func(ref->n);
}
