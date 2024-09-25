#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 *
 * Description: This function is used to print a binary tree structure
 * in a formatted way, visually representing the parent and child nodes.
 */
void binary_tree_print(const binary_tree_t *tree)
{
if (!tree)
return;

if (tree->left)
printf("(%03d) left: (%03d)\n", tree->n, tree->left->n);
if (tree->right)
printf("(%03d) right: (%03d)\n", tree->n, tree->right->n);

binary_tree_print(tree->left);
binary_tree_print(tree->right);
}
