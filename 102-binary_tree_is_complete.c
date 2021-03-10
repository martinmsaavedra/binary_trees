#include "binary_trees.h"

/**
 * countNodes - count nodes of tree
 * @root: root of tree
 * Return: count of node
 */

unsigned int countNodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + countNodes(root->left) + countNodes(root->right));
}

/**
 * isComplete - aux function - Ask if the tree is complete
 * @root: root of the tree
 * @index: index of the node
 * @number_nodes: number of nodes of the tree
 * Return: 1 if is complete, otherwise 0
 */

int isComplete(const binary_tree_t *root, unsigned int index,
			   unsigned int number_nodes)
{
	if (root == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);

	return (isComplete(root->left, 2 * index + 1, number_nodes) &&
			isComplete(root->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - ask if binary tree is complete
 * @tree: root of the tree
 * Return: 1 if tree is complete, otherwise 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int node_count = countNodes(tree);
	unsigned int index = 0;

	if (!tree)
		return (0);

	if (isComplete(tree, index, node_count))
		return (1);
	else
		return (0);
}
