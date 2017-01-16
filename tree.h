//tree.h


struct node {

    node* left;
    node* right;
    int   value;

    node(int v):left(NULL),right(NULL),value(v){
    }
};
