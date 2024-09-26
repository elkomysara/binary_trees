#include "binary_trees.h"
#include <stdlib.h>

/**
* bst_minimum - Finds the minimum value in a BST
* @root: A pointer to the root node of the tree
*
* Return: A pointer to the node with the minimum value
*/
bst_t *bst_minimum(bst_t *root)
{
while (root->left != NULL)
root = root->left;
return (root);
}

/**
* bst_remove - Removes a node from a Binary Search Tree (BST)
* @root: Pointer to the root node of the tree
* @value: Value to remove in the tree
*
* Return: Pointer to the new root node of the tree after removing the value
*/
bst_t *bst_remove(bst_t *root, int value)
{
bst_t *temp = NULL;

if (root == NULL)
return (NULL);

if (value < root->n)
root->left = bst_remove(root->left, value);
else if (value > root->n)
root->right = bst_remove(root->right, value);
else
{
if (root->left == NULL)
{
temp = root->right;
free(root);
return (temp);
}
else if (root->right == NULL)
{
temp = root->left;
free(root);
return (temp);
}
temp = bst_minimum(root->right);
root->n = temp->n;
root->right = bst_remove(root->right, temp->n);
}
return (root);
}
