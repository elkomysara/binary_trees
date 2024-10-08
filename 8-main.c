#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <pthread.h>

pthread_mutex_t lock;

/**
* print_num - Prints a number with thread-safe locking
* @n: Number to be printed
*/
void print_num(int n)
{
pthread_mutex_lock(&lock);
printf("%d\n", n);
pthread_mutex_unlock(&lock);
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
pthread_mutex_init(&lock, NULL);
binary_tree_t *root;

root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);
root->left->left = binary_tree_node(root->left, 6);
root->left->right = binary_tree_node(root->left, 56);
root->right->left = binary_tree_node(root->right, 256);
root->right->right = binary_tree_node(root->right, 512);

binary_tree_print(root);
binary_tree_postorder(root, &print_num);

pthread_mutex_destroy(&lock);
return (0);
}
