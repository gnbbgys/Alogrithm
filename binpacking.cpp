

#include <iostream>

struct Node{

public:
    Node* left;
    Node* right;
    Node* parent;
    double weight;  //remaining weight

    Node(double v):left(NULL),right(NULL),parent(NULL),weight(v){}
};


void insertObj(Node** root, int v, Node* parent)
{
    if( *root == NULL ) {  //root pointer or no big enough bin found
        *root = new Node(10-v);
        (*root)->parent = parent;
        return;
    }

    if(v == (*root)->weight) {

    }

    if(v > (*root)->weight){

    }

    if(v < (*root)->weight){  //current bin is big try to find better one
        insertObj((*root)->left, v, *root);
    }
}


int main()
{
    int w[10] = {0};
    gen_random(100, w, 10);

    std::cout << " Creating metal objects ... " << std::endl; 
    print_array(w, 10);

    Node* root = NULL; 
    for(int idx = 0; idx < 10; ++idx)
    {
        insetrtObj(&root, w[idx], root);
    }
}
