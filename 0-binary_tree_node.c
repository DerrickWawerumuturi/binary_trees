#include "binary_trees.h"

/**
 * binary_tree_node - functio n to create new node
 * @parent:parent node of new node
 * @value: value inside the node
 * Return: pointer to newnode(if successful) or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t* newnode = (binary_tree_t*)malloc(sizeof(binary_tree_t));
    if (newnode ==  NULL)
        return NULL;

    newnode->parent = parent;
    newnode->n = value;
    newnode->left = newnode->right = NULL;
    return (newnode);
}
