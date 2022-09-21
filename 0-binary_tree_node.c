#include "binary_trees.h"

/**
 * binary_tree_node - unction that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: NULL or newNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
    {
    free(newNode);
    return (NULL);
    }

    newNode->n = value;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}

