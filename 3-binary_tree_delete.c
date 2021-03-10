#include "binary_trees.h"

/**
  * binary_tree_delete - delete the whole tree
  * @tree: pointer to root
  */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *ref = tree;

	if (tree == NULL)
		return;

	if (ref->left == NULL && ref->parent == tree)
		return;

	binary_tree_delete(ref->left);
	binary_tree_delete(ref->right);
	free(ref);
}
