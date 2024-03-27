#include "binary_trees.h"

bst_t *bst_insert(bst_t **tree, int value) {
    if (*tree == NULL) {
        *tree = binary_tree_node((binary_tree_t *)NULL, value);
        return *tree;
    }

    if (value < (*tree)->n) {
        (*tree)->left = bst_insert(&((*tree)->left), value);
        return *tree;
    } else if (value > (*tree)->n) {
        (*tree)->right = bst_insert(&((*tree)->right), value);
        return *tree;
    }
    // If value is already present, ignore and return NULL
    return NULL;
}