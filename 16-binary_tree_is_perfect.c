#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * 
 * Return: if the tree is perfect return 1
 *          Otherwise, return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree) {
    if (tree == NULL)
        return (0);
    size_t height = binary_tree_height(tree);

    return is_perfect_recursive(tree, height, 0);
}

/**
 * is_perfect_recursive -checks if a binary tree is perfect recursively
 * @tree: A pointer to the root node of the tree to check
 * @height: the height of the binary tree
 * @level: the current level being checked
 * 
 * Return:  if tree is perfect at current level, return 1.
 *          Otherwise, return 0.
*/

int is_perfect_recursive(const binary_tree_t *tree, size_t height, size_t level) {
    if (tree == NULL)
        return (1);

    if (tree->left == NULL && tree->right == NULL)
        return (height == level + 1);

    if (tree->left == NULL || tree->right == NULL)
        return (0);

    return (is_perfect_recursive(tree->left, height, level + 1) &&
    is_perfect_recursive(tree->right, height, level + 1));
}

