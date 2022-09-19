#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function Pointer
 *
 * @parent: Pointer to the parent node
 * @value: Value of node
 * 
 * Return: NULL or newNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *newNode;

    newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (newNode == NULL) {
        free(newNode);
        return NULL;
    }

    newNode->n = value;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
