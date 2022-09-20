#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 *
 * @tree: pointer to a node of the tree.
 * 
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree){

    if (tree == NULL){
        return 0;
    }

    return tree->left == NULL && tree->right == NULL ? 
        1 : binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
