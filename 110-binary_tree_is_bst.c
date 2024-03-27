#include "binary_trees.h"
#include "limits.h"

int check_bst(const binary_tree_t *tree, int min, int max) {
    if (tree == NULL)
        return (0);
    if (tree->n <= min || tree->n >= max)
        return (0);

    return (check_bst(tree->left, min, tree->n) &&
            check_bst(tree->right, tree->n, max));
}

int binary_tree_is_bst(const binary_tree_t *tree) {
    if (tree == NULL)
        return (1);
    
    return (check_bst(tree, INT_MIN, INT_MIN));
    
    
}