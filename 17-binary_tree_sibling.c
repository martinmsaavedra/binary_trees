#include "binary_trees.h"

/**
  * binary_tree_sibling - find the sibling of a given node
  * @node: reference node
  * Return: the opposite node or NULL if not found
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *op_node = NULL; /* opposite node */

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		op_node = node->parent->right;
	else
		op_node = node->parent->left;

	if (op_node == NULL)
		return (NULL);
	else
		return (op_node);
}
