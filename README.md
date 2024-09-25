# Binary Trees Project

## Resources
- **Binary tree**: [Read here](https://en.wikipedia.org/wiki/Binary_tree)
- **Data Structure and Algorithms - Tree**: [Read here](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- **Tree Traversal**: [Learn about traversal methods](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
- **Binary Search Tree (BST)**: [Understand BST](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)
- **Data structures: Binary Tree**: [In-depth guide](https://www.geeksforgeeks.org/binary-tree-data-structure/)

## Learning Objectives
By the end of this project, you will be able to explain the following concepts:

### General
- **What is a binary tree**: A hierarchical data structure with nodes, where each node has at most two children, commonly referred to as left and right children.
  
- **Binary Tree vs Binary Search Tree (BST)**:
  - Binary Tree: No specific order in the values.
  - Binary Search Tree: Left child < Parent < Right child.

- **Time complexity gain**: BST provides better search time complexity compared to linked lists, achieving `O(log n)` for balanced trees, whereas linked lists have `O(n)`.

- **Tree Terminology**:
  - **Depth**: Number of edges from the node to the tree's root.
  - **Height**: Number of edges on the longest path from the node to a leaf.
  - **Size**: Total number of nodes in the tree.

- **Traversal methods**:
  1. **Pre-order**: Root → Left → Right
  2. **In-order**: Left → Root → Right
  3. **Post-order**: Left → Right → Root
  4. **Level-order**: Top to bottom, left to right across levels.

- **Types of Binary Trees**:
  - **Complete Binary Tree**: All levels except possibly the last are fully filled.
  - **Full Binary Tree**: Every node has 0 or 2 children.
  - **Perfect Binary Tree**: All internal nodes have 2 children, and all leaves are at the same level.
  - **Balanced Binary Tree**: The height of two subtrees of any node never differs by more than one.

## Requirements
- **Editors**: `vi`, `vim`, `emacs`
- **Compilation**: All files will be compiled on Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code Style**: Follow the Betty coding style and document your code with the Betty doc standard.
- **GitHub Repository**: All tasks must be submitted to a single repository. Ensure proper version control practices.

## Data Structures

### Binary Tree Node Structure:
```c
struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
```

- Variants of Binary Trees:
  - Binary Search Tree (BST): `typedef struct binary_tree_s bst_t;`
  - AVL Tree: `typedef struct binary_tree_s avl_t;`
  - Max Binary Heap: `typedef struct binary_tree_s heap_t;`

## Tasks Overview
1. **New Node**: Create a binary tree node.
2. **Insert Left**: Insert a node as the left child.
3. **Insert Right**: Insert a node as the right child.
4. **Delete Tree**: Delete an entire binary tree.
5. **Is Leaf**: Check if a node is a leaf.
6. **Is Root**: Check if a node is the root.
7. **Pre-order Traversal**: Traverse a tree using pre-order traversal.
8. **In-order Traversal**: Traverse a tree using in-order traversal.
9. **Post-order Traversal**: Traverse a tree using post-order traversal.
10. **Measure Height**: Measure the height of a binary tree.
11. **Measure Depth**: Measure the depth of a node in a binary tree.
12. **Measure Size**: Measure the size of a binary tree.
13. **Count Leaves**: Count the leaves in a binary tree.
14. **Count Nodes**: Count nodes with at least 1 child.
15. **Balance Factor**: Calculate the balance factor of a binary tree.
16. **Is Full**: Check if a binary tree is full.
17. **Is Perfect**: Check if a binary tree is perfect.
18. **Find Sibling**: Find the sibling of a node.
19. **Find Uncle**: Find the uncle of a node.
20. **Lowest Common Ancestor**: Find the lowest common ancestor of two nodes.
21. **Level-order Traversal**: Traverse a binary tree in level-order.
22. **Is Complete**: Check if a binary tree is complete.
23. **Rotate Left**: Perform a left rotation on a binary tree.
24. **Rotate Right**: Perform a right rotation on a binary tree.
25. **Is Binary Search Tree**: Check if a tree is a valid BST.
26. **BST Insert**: Insert a value in a BST.
27. **Array to BST**: Build a BST from an array.
28. **BST Search**: Search for a value in a BST.
29. **BST Remove**: Remove a node from a BST.
30. **Big O - BST**: Time complexities for BST operations.
31. **Is AVL**: Check if a tree is a valid AVL tree.
32. **AVL Insert**: Insert a value in an AVL tree.
33. **Array to AVL**: Build an AVL tree from an array.
34. **AVL Remove**: Remove a node from an AVL tree.
35. **Big O - AVL**: Time complexities for AVL operations.
36. **Is Binary Heap**: Check if a binary tree is a Max Binary Heap.
37. **Heap Insert**: Insert a value into a Max Binary Heap.
38. **Array to Binary Heap**: Build a Max Binary Heap from an array.
39. **Heap Extract**: Extract the root node of a Max Binary Heap.
40. **Big O - Heap**: Time complexities for Heap operations.

# binary_trees
# binary_trees
