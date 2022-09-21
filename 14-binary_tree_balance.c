#include <math.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - a function that counts nodes with at least one child in a binary tree.
 * @tree: pointer to a node of the tree.
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{   
    if (tree == NULL)
    {
    return (0);
    }

    int leftTreeHeight = binary_tree_balance(tree->left);
    if (leftTreeHeight == -1)
    {
    return (-1);
    }

    int rightTreeHeight = binary_tree_balance(tree->right);
    if (rightTreeHeight == -1)
    {
    return (-1);
    }

    if (abs(leftTreeHeight - rightTreeHeight) > 1)
    {
    return (-1);
    }

    return (fmax((double) leftTreeHeight, (double) rightTreeHeight) + 1);
}
