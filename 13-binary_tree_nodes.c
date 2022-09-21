#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts nodes with at least one child in a binary tree.
 *
 * @tree: pointer to a node of the tree.
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t size = 0;
    if (tree == NULL)
    {
    return (0);
    }

    size += tree->left != NULL || tree->right != NULL ? 1 : 0;
    size += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    return (size);
}
