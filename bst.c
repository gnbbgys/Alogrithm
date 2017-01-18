#include <stdio.h>

typedef struct node{
    node* left;
    node* right;
    int data;
    int key;
}node;

struct node* newnode(int v)
{
    struct node* nodenew  = (struct node*) malloc(sizeof(node));
    nodenew->left  = NULL;
    nodenew->right = NULL;
    nodenew->data  = v;
    nodenew->key   = v;

    return nodenew;
}

void print_tree(node* root)
{
    if(root == NULL) return;
    print_tree(root->left);
    print("%d:%d ", root->key, root->data);
    print_tree(root->right);
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

int compare_trees(node* t1, node* t2)
{
    if( t1 == NULL && t2 == NULL) return 1;
    if( t1 == NULL || t2 == NULL) return 0;
    
    int node_cmp = (t1->data == t2->data)&&(t1->key == t2->key);

    return node_cmp && 
           compare_tree(t1->left, t2->left) && 
           compare_tree(t1->right, t2->right);
}

int main()
{
    return 0;
}

