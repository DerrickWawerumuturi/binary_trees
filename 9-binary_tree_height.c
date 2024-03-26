#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of the binary tree
 * @tree: binary tree to calculate the height of
 * Return:  the height on success and 0 on failure
*/

size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree) {
        size_t l = 0, r = 0;


        l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
        return ((l > r) ? l : r);
    }
    return (0);
}