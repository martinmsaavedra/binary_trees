#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* binary search tree */
typedef struct binary_tree_s bst_t;

/* AVL tree */
typedef struct binary_tree_s avl_t;

/* max binary heap */
typedef struct binary_tree_s heap_t;

/* print formated binary tree */
void binary_tree_print(const binary_tree_t *);

/* create binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insert node at left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert node at right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* delete a tree */
void binary_tree_delete(binary_tree_t *tree);

/* check if node is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* check if node is root */
int binary_tree_is_root(const binary_tree_t *node);

/* go through tree using pre-order transversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* go through tree using in-order transversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* go through tree using post-order transversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* get the height of a tree or subtree */
size_t binary_tree_height(const binary_tree_t *tree);

/* get the depth of a node */
size_t binary_tree_depth(const binary_tree_t *tree);

/* count the nodes in the tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* count the leaves in a tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* count nodes with a least 1 child */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* check balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree);

/* check if tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* check if tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* pow function */
int _pow_recursion(int x, int y);

/* find a sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* find the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif /* _BINARY_TREES_H_ */
