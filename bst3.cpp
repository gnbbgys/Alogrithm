#include <iostream>
#include <stdio.h>

struct Node{
    Node* left;
    Node* right;
    Node* parent;
    int data;
    int key;
};

Node* newnode(int v)
{
    Node* nodenew  = (Node*) malloc(sizeof(Node));
    nodenew->left  = NULL;
    nodenew->right = NULL;
    nodenew->data  = v;
    nodenew->key   = v;

    return nodenew;
}

void print_tree(Node* root)
{
    if(root == NULL) return;
    print_tree(root->left);
    printf("%d:%d ", root->key, root->data);
    print_tree(root->right);
}

Node* findSuccessor(Node* n)
{
    if(n->right != NULL){
        return findMinNode(n->right);
    }
    else{
        Node* p = n->parent;
        while(p != NULL && n == p->right)
        {
            n = p;
            p = p->parent;
        }
        return p;
    }
}

Node* findSuccessor(Node* y, Node* x, Node* p)
{
    if(y->key == x->key)
        return p;
    if(y->key > x->key)
        findSuccessor(y->left, x, y);
    else findSuccessor(y->right, x, p);
}

void insertNode(Node* p, Node* n, Node* z)
{
    if(n != NULL)
    {
        if(z->key > n->key)
            insertNode(n, n->right, z);
        else
            insertNode(n, n->left, z);
    }

    //what if p is NULL
    z->p = p;
    if(p->key > n->key){
        p->left = z;
    }
    else{
        p->right = z;
    }
}

void insertNode(Node* root, int v)
{
    if(root == NULL) return newNode(v);

    Node* left  = NULL;
    Node* right = NULL;

    if(v > root->value) 
        left = insertNode(root->right, v);
    else
        right = insertNode(root->left, v);

    root->left  = left;
    root->right = right;

    return root;
}

void insertNode2(Node* root, int v)
{
    if(root == NULL) return; //throw

    Node* p = NULL;
    while(root != NULL)
    {
        p = root; //p will be parent when root == NULL
        if(v>root->value) root = root->right;
        else root = root->left;
    }

    if(v > p->value) p->right = newNode(v);
    if(v < p->value) p->left  = newNode(v);
    //setup parent of the node;
}

void transplant(Node* root, Node* p, Node* n)
{
    if(p== root) {  //p->parent == NULL, p is root

    }
}

void deleteNode(Node* root, Node* n)
{
    if(n->left == NULL){
        transplant(Node* root, Node* n);
    }

    if(n->right == NULL){
    }
}

int main()
{
    return 0;
}

