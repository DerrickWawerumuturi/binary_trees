#include "binary_trees.h"
#include "stdbool.h"

int is_avl_tree(const binary_tree_t *tree) {
    if (tree == NULL)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    if (labs(left_height - right_height) > 1)
        return (0);

    if (!binary_tree_is_bst(tree))
        return (0);

    return 1;
}
