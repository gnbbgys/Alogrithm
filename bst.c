#include <stdio.h>

typedef struct node{
    node* left;
    node* right;
    int data;
}node;

node* newnode(int v)
{
    node* nodenew  = (node*) malloc(sizeof(node));
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

    lefttree = blt_min_tree();
}


int main()
{
    return 0;
}

