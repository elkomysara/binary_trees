#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is complete, 0 otherwise
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Create a queue to traverse the tree */
binary_tree_t *queue[1024];
int front = 0, rear = 0;
int flag = 0;

/* Add the root to the queue */
queue[rear++] = (binary_tree_t *)tree;

/* Perform level-order traversal */
while (front < rear)
{
binary_tree_t *node = queue[front++];

if (node->left)
{
if (flag)
return (0);
queue[rear++] = node->left;
}
else
{
flag = 1;
}

if (node->right)
{
if (flag)
return (0);
queue[rear++] = node->right;
}
else
{
flag = 1;
}
}

return (1);
}
