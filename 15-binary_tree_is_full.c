#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is full, otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If it's a leaf node, it's full */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* Check if both left and right subtrees are full */
if (tree->left != NULL && tree->right != NULL)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (0);
}
