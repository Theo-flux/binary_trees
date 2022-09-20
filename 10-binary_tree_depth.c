#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Function to calculate the depth of a node.
 *
 * @tree: pointer to a node of the tree
 * 
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree){
    size_t depth = 0;

    depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

    return depth;
}
