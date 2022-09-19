#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if node is leaf node.
 *
 * @node: pointer to node
 * 
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node){
    int res = 0;

    if (node->left == NULL && node->right == NULL){
        res = 1;
    }

    return res;
}
