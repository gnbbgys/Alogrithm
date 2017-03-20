#include <iostream>

struct Node{
    int   data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int v):left(NULL),right(NULL),parent(NULL){}
};

Node* insert(Node* root, int v)
{
    if(root == NULL) return new Node(v);

    Node* temp   = root;
    Node* parent = NULL;
    while(temp != NULL)
    {
        parent = temp;
        if(temp->data > v) {
            temp = temp->left;
        }
        else if(temp->data < v) {
            temp = temp->right;
        }
    }

    Node* node = new Node(v);
    if(parent == NULL) return node;

    if(v < parent->data){
        parent->left = node;
        node->parent = parent;
    }
    else if(v > parent->data){
        parent->right = node;
        node->parent = parent;
    }

    return root;
}

Node* buildTree()
{
    Node* root = new Node(1);
    return root;
}

int main()
{
    return 0;
}
