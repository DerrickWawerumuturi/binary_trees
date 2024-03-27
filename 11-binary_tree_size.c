#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of the binary tree
 * @tree: the tree
 * ReturnL the size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree) {
    if (tree) {
        size_t l = 0, r = 0;

        l = binary_tree_size(tree->left);
        r = binary_tree_size(tree->right);
        return (1 + l + r);
    }
    return (0);
}