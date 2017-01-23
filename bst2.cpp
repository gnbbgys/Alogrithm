

#include <iostream>
#include <climits>

ttruct node {
    node* left;
    node* right;

    int data;

    int lower;
    int upper;

    node(int v, int l, int h)
        : data(v), lower(l), upper(h), left(NULL), right(NULL){}
};


node* newNode(int v, int l, int h)
{
    return new node(v, l, h);
}

//build tree from array 
//for example [2, 5, 1, 3, 10, 6, 2]
node* buildtree(int arr[], int& min, int l, int h)
{
    if(h == l) {
        min = arr[l];
        return newNode(arr[l], l, h);
    }

    int lMin = INT_MAX;
    int rMin = INT_MAX;
    int m = (l+h)/2;

    node* leftTree = buildtree(arr, lMin, l, m); 
    node* righTree = buildtree(arr, rMin, m+1, h); 

    min = (lMin < rMin)? lMin : rMin;

    node* n  = newNode(min, l, h);
    n->left  = leftTree;
    n->right = righTree;

    return n;
}

void postOrderTraversal(node* root)
{
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);

    std::cout << root->data << "(" << root->lower << ":" << root->upper << ")" << std::endl;
}

int main()
{
    //for example [2, 5, 1, 3, 10, 6, 2]
    int arr[] = {2, 5, 1, 3, 10, 6, 2};

    int min = INT_MAX;
    node* root = buildtree(arr, min, 0, 6);
    postOrderTraversal(root);
}       

