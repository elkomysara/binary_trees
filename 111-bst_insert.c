#include "binary_trees.h"

/**
* bst_insert - Inserts a value in a Binary Search Tree (BST).
* @tree: Double pointer to the root node of the BST to insert the value.
* @value: The value to store in the new node.
*
* Return: A pointer to the created node, or NULL on failure or if the value
*         is already present in the tree.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new_node = NULL;
bst_t *current = NULL;

if (tree == NULL)
return (NULL);

if (*tree == NULL)
{
new_node = (bst_t *)binary_tree_node(NULL, value);
*tree = new_node;
return (new_node);
}

current = *tree;
while (current)
{
if (value < current->n)
{
if (current->left == NULL)
{
new_node = (bst_t *)binary_tree_node(current, value);
current->left = new_node;
return (new_node);
}
current = current->left;
}
else if (value > current->n)
{
if (current->right == NULL)
{
new_node = (bst_t *)binary_tree_node(current, value);
current->right = new_node;
return (new_node);
}
current = current->right;
}
else
{
return (NULL);
}
}

return (NULL);
}
