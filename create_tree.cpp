//create_tree.cpp

#include <iostream>
#include <string>

struct node {

    node* left;
    node* right;
    int data;

    node(node* l, node* r, int v):left(l),right(r),data(v){}
};


node* newNode(int v)
{
    return (new node(NULL, NULL, v));
}


void printTree(node* tree)
{
    if(tree == NULL) return;
}


node* buildTree(int arr[], int sz, int idx)
{
    if(idx>=sz) return NULL;

    node* buildTree(
}

int main()
{
}

