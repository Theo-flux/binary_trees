# binary_trees
Non-linear DSA

## Resources
- [Binary tree (not to be confused with B-tree.)](https://alx-intranet.hbtn.io/rltoken/1F2x42-8vUbOmU4L1C1KMg)
- [Data Structure and Algorithms - Tree](https://alx-intranet.hbtn.io/rltoken/QmcTMCkQyrgMjrqoWxYdhw)
- [Tree Traversal](https://alx-intranet.hbtn.io/rltoken/nMxoYQdZR_guroan8JeqBQ)
- [Binary Search Tree](https://alx-intranet.hbtn.io/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
- [Data structures: Binary Tree](https://alx-intranet.hbtn.io/rltoken/BeyJ2gjlE7_djwRiDyeHig)
- [Balanced binary tree](https://www.digitalocean.com/community/tutorials/balanced-binary-tree-check)

## General
* What is binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Binary Tree Structure
* <h3>Root</h3> The node not having any parent.
* <h3>Node</h3> Contains data and link to another node. Elements of a tree are called nodes.
* <h3>Parent node</h3> A node with at least one child and at most two children (that's why it is called Binary Tree).
* <h3>Leaf node</h3> A node without child/children. It is also called an external node.
* <h3>Path</h3> Sequence of consecutive edges from source node to destination node.
* <h3>Ancestor</h3> Any predecessor node on the path from root node to that nod### Descendant
* <h3>Descendant</h3> Any successor node on the path from root node to leaf node.
* <h3>Degree of a node</h3> Number of connections it has to other nodes.
* <h3>Depth of a node</h3> The length of the path from root to that node.
* <h3>Height of a node</h3> The number of edges in the longest path from that node to a leaf node.
* <h3>Level of node</h3> The number of edges from root to the given node.
* <h3>Size of a binary tress</h3> The number of nodes; a leaf node has a size of 1

## Balnced Binary Tree and Balance Factor (k):
Balanced binary tree are very efficient to perform operations on.
### conditions for a binary tree to be balanced:
* The absolute difference of height of left and right subtrees at any node must be less than 1.
* For each node, its left and right subtrees are balanced binary tree.
### Height balanced binary tree:
Balanced Binary Trees are also called Height Balanced Binary Trees.
denoteda s HB(k) (where k is the balanced factor). If k = 0, then the tree is said to be fully balanced.

### Tree Traversal
Traversal is the process of visiting all nodes of a tree and may print their values too. All nodes are connected via links. The traversal always starts from root (head) node.
There are three ways:
1. In-order Traversal (left -> Root -> Right)
2. Pre-order Traversal (Root -> Left -> Right)
3. Post-order Traversal (Left -> Right -> Root)

### Self Balancing Binary Search Tree
If a binary search tree has a balance factor of one then it is an AVL ( Adelso-Velskii and Landis) tree. This means that in an AVL tree the difference between left subtree and right subtree height is at most one.

AVL tree is a self-balancing binary search tree. In an AVL tree if the difference between left and right subtrees is greater than 1 then it performs one of the following 4 rotations to rebalance itself :
* left rotation
* right rotation
* left-right rotation
* right-left rotation
### How to check if a binary tree is balanced:
The tree conditions to check if a binary tree is balanced are:
* The absolute difference between heights of left and right subtrees at any node should be less than 1.
* For each node, its left subtree should be a balanced binary tree.
* For each node, its right subtree should be a balanced binary tree.
