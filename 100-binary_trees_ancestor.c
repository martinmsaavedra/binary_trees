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

/**
  * binary_tree_ancestor - get the depth of a node
  * @first: pointer to node
  * @second: pointer to node
  * Return: Ancestor
  */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t first_depth = binary_tree_depth(first);
	size_t second_depth = binary_tree_depth(second);
	const binary_tree_t *node_F = first, *node_S = second;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (node_F->parent == node_S)
		return (node_F->parent);

	if (node_S->parent == node_F)
		return (node_S->parent);

	while (first_depth != second_depth)
	{
		if (first_depth > second_depth)
		{
			node_F = node_F->parent;
			first_depth -= 1;
		}
		else
		{
			node_S = node_S->parent;
			second_depth -= 1;
		}
	}
	if (node_F->parent == node_S->parent)
		return (node_F->parent);

	binary_trees_ancestor(node_F->parent, node_S->parent);

	return (NULL);
}
