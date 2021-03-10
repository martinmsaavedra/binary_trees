#include "binary_trees.h"

/**
  * binary_tree_insert_right - insert a node as a left child
  * @parent: parent of the node to insert
  * @value: value to asign in n
  * Return: the new node or NULL on failure or if the parent is NULL
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right = NULL;

	if (parent == NULL)
		return (NULL);

	new_node_right = binary_tree_node(parent, value);
	if (new_node_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node_right->right = parent->right;
		parent->right->parent = new_node_right;

	}

	parent->right = new_node_right;
	return (new_node_right);
}
