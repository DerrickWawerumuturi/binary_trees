#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least on child in a tree
 * @tree: the tree
 * Return: total nodes with at least a child on successs or 0 on failure
*/
size_t binary_tree_nodes(const binary_tree_t *tree) {
    size_t count = 0;

    if (tree) {
        count += (tree->left || tree->right) ? 1 : 0;
        count += binary_tree_nodes(tree->left);
        count += binary_tree_nodes(tree->right);
    }

    return count;
}