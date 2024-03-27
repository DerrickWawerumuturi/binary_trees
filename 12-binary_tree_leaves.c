#include "binary_trees.h"

/**
 * binary_tree_count - counts the number of leaves in a tree
 * @tree: the tree
 * Return: total leaves on successs or 0 on failure
*/
size_t binary_tree_count(const binary_tree_t *tree) {
    size_t count = 0;

    if (tree)
	{
		count += (!tree->left && !tree->right) ? 1 : 0;
		count += binary_tree_count(tree->left);
		count += binary_tree_count(tree->right);
	}

    return (count);
}