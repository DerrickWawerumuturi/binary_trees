#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to right of parent
 * @parent: the node in which its left is inserted
 * @value: data stored in the new node
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {

    binary_tree_t* temp;

    binary_tree_t* newnode = (binary_tree_t*)malloc(sizeof(binary_tree_t));
    newnode->n = value;
    newnode->right = newnode->left = NULL;

    if (parent == NULL)
        return NULL;

    if (parent->right == NULL) {
        newnode->parent = parent;
        parent->right = newnode;
        return newnode;
    }
    else {
        temp = parent->right;
        newnode->parent = parent;
        parent->right = newnode;
        newnode->right = temp;
        return newnode;
    }
}