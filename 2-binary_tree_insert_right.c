#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to insert node at the right side of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * 
 * Return: leftNode or NULL on failure of if parent node is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
    binary_tree_t *rightNode, *temp;

    rightNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    temp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

    if (rightNode == NULL){
        free(rightNode);
        return NULL;
    }

    if (temp == NULL){
        free(temp);
        return NULL;
    }

    if (parent == NULL){
        return NULL;
    }

    rightNode->n = value;
    rightNode->parent = parent;
    rightNode->left = NULL;

    if (parent->right == NULL) {
        rightNode->right = NULL;
        parent->right = rightNode;
    }
    else {
        temp = parent->right;
        parent->right = rightNode;
        rightNode->right = temp;
    }

    return rightNode;
    free(temp);
}
