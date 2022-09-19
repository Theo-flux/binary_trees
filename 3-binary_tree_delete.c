#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Function to an entire tree
 *
 * @tree: pointer to tree (root node)
 * 
 * Return: NULL
 */
void binary_tree_delete(binary_tree_t *tree){
    if (tree != NULL){
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}
