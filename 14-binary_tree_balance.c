#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The balance of the binary tree, or 0 if tree is NULL.
*/

int binary_tree_balance(const binary_tree_t *tree) {
    if (tree) {
        size_t l = 0, r = 0;


        l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

        return (1 + (l > r ? l: r));
    }
}