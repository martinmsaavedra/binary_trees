#include "binary_trees.h"

/**
  * binary_tree_depth - get the depth of a node
  * @tree: pointer to node
  * Return: Counter
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
