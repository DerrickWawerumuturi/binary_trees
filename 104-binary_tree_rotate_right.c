#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-roattion 
 * on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: apointer to the noew root once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    binary_tree_t *temp, *nxt;
    if (tree == NULL || tree->left  == NULL)
        return (NULL);

    temp =  tree->left;
    nxt = temp->right;
    temp->right =  tree;
    tree->left = nxt;
    if (nxt != NULL)
        nxt->parent = tree;

    nxt = tree->parent;
    tree->parent = temp;
    pivot->
}