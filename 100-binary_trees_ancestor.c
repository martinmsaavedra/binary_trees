#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *curr = first, *right_subtree = NULL, *left_subtree = NULL;

	if (curr == NULL)
	{
		return NULL;
	}
	else if (curr == first || curr == second)
	{ 
		return curr;
	}
	
	left_subtree = lowest_common_ancestor(curr->left, first, second);
	right_subtree = lowest_common_ancestor(curr->right, first, second);

	if (left_subtree != NULL && right_subtree != NULL)
	{ 
		return curr;
	}
	else if (left_subtree != NULL)
	{
		return left_subtree;
	}
	else
	{
		return right_subtree;
	}

	return NULL; 
}
