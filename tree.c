
#include "tree.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "util.h" 


int find_tree_depth(Node* root)
{
    if(root == NULL) return 0;
    left_depth  = find_tree_depth(root->left);
    right_depth = find_tree_depth(root->right);

    if(left_depth > right_depth) return  left_depth + 1;
    else return right_depth + 1;
}


Node*[] reverse_tree(Node* root)
{
    Node* leaves[] = {0};
    return leaves;
}

//delete BST
void delete_node(node** root, int v)
{
    if(*node == NULL) return;
    
    if((*root)->value > v) {
        delete_node((*root)->left);
    }
    else{
        delete_node((*root)->right);
    }
    else {
        if(*root->left == NULL || *root->right == NULL){
            //just remove and append remaining subtree to parent
            //refactor the code, remove single node
        }
        else {
            //find minimum from right subtree and replace, remove
            //the mimium from right subtree
        }
    }
}
