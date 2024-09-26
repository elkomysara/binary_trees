#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: If tree is NULL, return 0, otherwise return the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (left_height > right_height ? left_height : right_height);
}

/**
* binary_tree_level - Perform a function on nodes at a specific level
* @tree: Pointer to the root of the tree
* @func: Function to perform on node values
* @level: Level to execute function on
*/
void binary_tree_level(const binary_tree_t *tree, void (*func)(int), int level)
{
if (tree == NULL)
return;

if (level == 0)
func(tree->n);
else
{
binary_tree_level(tree->left, func, level - 1);
binary_tree_level(tree->right, func, level - 1);
}
}

/**
* binary_tree_levelorder - Traverse a binary tree using level-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
size_t height, level;

if (tree == NULL || func == NULL)
return;

height = binary_tree_height(tree);
for (level = 0; level <= height; level++)
binary_tree_level(tree, func, level);
}
