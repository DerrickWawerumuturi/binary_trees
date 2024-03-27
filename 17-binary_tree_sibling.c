#include "binary_trees.h"

/**
 * binary_tree_sibling - finds  the sibling of a node in abinary tree
 * @node: pointer to the node to find sibling
 * Return: if node is NULL return null, if parent is null, return null
 *          if node has no sibling return NULL
 *          Otherwise, return pointer to sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node) {
    if (node == NULL || node->parent == NULL)
        return (NULL);

    if (node->parent->left)
        return (node->parent->right);

    return (node->parent->left);
}