#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert node at the left side of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * 
 * Return: leftNode or NULL on failure of if parent node is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
    binary_tree_t *leftNode, *temp;

    leftNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    temp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

    if (leftNode == NULL){
        free(leftNode);
        return NULL;
    }

    if (temp == NULL){
        free(temp);
        return NULL;
    }

    if (parent == NULL){
        return NULL;
    }

    leftNode->n = value;
    leftNode->parent = parent;
    leftNode->right = NULL;

    if (parent->left == NULL) {
        leftNode->left = NULL;
        parent->left = leftNode;
    }
    else {
        temp = parent->left;
        parent->left = leftNode;
        leftNode->left = temp;
    }

    return leftNode;
    free(temp);
}
