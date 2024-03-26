#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to left of parent
 * @parent: the node in which its left is inserted
 * @value: data stored in the new node
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {

	binary_tree_t* newnode = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return NULL;
	newnode->n = value;
	newnode->left = newnode->right = NULL;
	newnode->parent = parent;
	parent->left = newnode;

	return newnode;
}
