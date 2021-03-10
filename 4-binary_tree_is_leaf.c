#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check if a node is a leaf node
  * @node: node to check
  * Return: 0 if not, 1 if yes
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
