
#include <iostream>
#include "tree.h"

//heuristic find the bin that after place the metal
//object the remaining room is lest. If there is no
//bin can hold the metal object, create a new bin and
//insert into the binary tree.

void binpacking(node* root, int v)
{
    //search for best bin, if cannot find, insert a new bin
    node* curMin = ((root->value - v) >= 0)? root : NULL;
    int   min = (curMin == NULL)?MAX : (root->value - v);
    while(curr != NULL)
    {
        if(curr->value >= v){
            if(min > (curr->value - v)){
                min = curr->value - v;
                curMin = curr;
            }
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
    }

    if(curMin != NULL){
        curMin->value -= v;
    }
    else {
        insert(root, v);
    }
}

void insert(node* root, int v)
{
    if(root == NULL) {
    };

    if(root->value >= v){
        root->left = insert(root->left, v);
    }
    else{
        if(!root->right){
            root->right = new node(v);
        }
        else{
            insert(root->right, v);
        }
    }
}

