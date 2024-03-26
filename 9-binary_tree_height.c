#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree == NULL) {
        return (0);
    }
    size_t left = binary_tree_height(tree->left);
    size_t right = binary_tree_height(tree->right);

    if (left > right) {
        return (left + 1);
    }
    else {
        return (right + 1);
    }
}