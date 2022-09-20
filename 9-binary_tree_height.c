#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Function to calculate the max height of tree or height of root.
 *
 * @tree: pointer to the root node of the tree to traverse
 * 
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree){
    size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
