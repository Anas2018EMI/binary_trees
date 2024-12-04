#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);

	/* A perfect binary tree of height h has (2^(h+1) - 1) nodes */
	size_t perfect_size = (1 << (height + 1)) - 1;

	return (size == perfect_size);
}
