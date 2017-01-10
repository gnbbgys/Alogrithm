//tree.c

#include "tree.h"

#include <stdlib.h>

int get_depth(struct node* root)
{
    if(root == NULL) return 0;

    int left  = get_depth(root->left);
    int right = get_depth(root->right);

    if(left > right) return left+1; 
    else return right+1;
}

struct node* create_tree(int depth)
{
    if(depth == 0) return NULL;

    struct node* curr =  (struct node*) malloc(sizeof(struct node));

    curr->left  = create_tree(depth - 1);
    curr->right = create_tree(depth - 1);
    curr->value = depth;

    return curr;
}
