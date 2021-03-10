#include "binary_trees.h"

/**
  * binary_tree_insert_left - insert a node as a left child
  * @parent: parent of the node to insert
  * @value: value to asign in n
  * Return: the new node or NULL on failure or if the parent is NULL
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left = NULL;

	if (parent == NULL)
		return (NULL);

	new_node_left = binary_tree_node(parent, value);
	if (new_node_left == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node_left->left = parent->left;
		parent->left->parent = new_node_left;

	}

	parent->left = new_node_left;
	return (new_node_left);
}
