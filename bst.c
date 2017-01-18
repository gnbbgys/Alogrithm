#include <stdio.h>

typedef struct node{
    node* left;
    node* right;
    int data;
}node;

struct node* newnode(int v)
{
    struct node* nodenew  = (struct node*) malloc(sizeof(node));
    nodenew->left  = NULL;
    nodenew->right = NULL;
    nodenew->data  = v;

    return nodenew;
}

//a=[1, 4, 2, 11, 8, 5, 3]
void blt_min_tree(node* root, int ls, int re, int a[])
{
    if(ls == re) { //leaf node
        return newnode(a[ls]);
    }

    int mid = (ls+re)/2;

    left_tree  = blt_min_tree();
    right_tree = blt_min_tree();
}


int main()
{
    return 0;
}

