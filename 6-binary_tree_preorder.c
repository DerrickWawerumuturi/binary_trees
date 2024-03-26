#include "binary_trees.h"

/**
 * binary_tree_preorder - traveses through the tree from
 * root->left->right
 * @tree: binary tree to traverse through
 * @func: function to print the vaues of each node a it traverses
 * Return: void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)) {

    if (tree == NULL || func == NULL)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}