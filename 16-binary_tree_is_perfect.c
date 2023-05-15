#include "binary_trees.h"

/**
 * 
 * 
 * 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_depth, right_depth;

    if (tree == NULL)
        return (0);

    left_depth = binary_tree_height(tree->left);
    right_depth = binary_tree_height(tree->right);

    if (left_depth != right_depth)
        return (0);

    return (binary_tree_is_full(tree));
}