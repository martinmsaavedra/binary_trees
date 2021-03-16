#include "binary_trees.h"

/**
 * bst_insert - insert a node in BST tree
 * @tree: double pointer to root of three
 * @value: value of node to be inserted
 * Return: a pointer to the created node, or NULL on failure
 **/

bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *new_node, *temp;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		new_node = binary_tree_node(*tree, value);
		*tree = new_node;
		return (new_node);
	}
	temp = *tree;
	while (temp)
	{
		if (value < temp->n)
		{
			if (temp->left == NULL)
			{
				new_node = binary_tree_node(temp, value);
				temp->left = new_node;
				return (new_node);
			}
			temp = temp->left;
		}
		else if (value > temp->n)
		{
			if (temp->right == NULL)
			{
				new_node = binary_tree_node(temp, value);
				temp->right = new_node;
				return (new_node);
			}
			temp = temp->right;
		}
		else
			return (NULL);
	}
	return (*tree);

}
