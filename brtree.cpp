

#include <iostream>

enum {
    RED = 1,
    BLACK = 2
};

struct Node{

    Node* left;
    Node* right;
    Node* parent;
    int key;
    int color;

    Node(int k)
        :key(k),left(NULL),right(NULL),parent(NULL),color(RED){
    }

};

void insertNode(Node** root, Node* n)
{
    if(*root = NULL) *root = n; return;

    Node* r = *root;
    Node* p = *root;

    while(r != NULL)
    {
        p = r;
        if(r->key > n->key){
            r = r->left
        }
        else if(r->key < n->key){
            r = r->right;
        }
    }

    if(p->key < n->key){
        p->right = n;
    }
    else if(p->key > n->key){
        p->left = n;
    }

    n->parent = p;
}

// n pointing to the new node inserted in
void brtreeInsertFixedUp(Node** root, Node* n)
{
    while(n->parent->color == RED){
        //case 1 if uncle is red, then change parent and uncle 
        //to BLACK and change grandpa to RED and recurusive call
        if(n->parent->parent->right->color == RED){
        }
    }
}

void insertNodeBR(Node** root, Node* n)
{
    //regular insert
    insertNode(root, n);

    n->color = RED;
    brtreeInsertFixedUp(root, n);
}

void transplant(Node** root, Node* u, Node* v)
{
    if(*root == NULL) {  //u must be null
        *root = v; 
        return;
    }

    //u cannot be null
    if(u->parent == NULL){ //u is the root
        *root = v;
    }

    if(u->parent->left == u){
        u->parent->left = v;
    }
    else if(u->parent->right == u){
        u->parent->right = v;
    }

    v->parent = u->parent;


    //delete u
    delete u;
}


int main()
{
    return 0;
}
