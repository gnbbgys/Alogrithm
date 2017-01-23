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

//wrong, assume it's BST already, how to fix it ??
int get_max(node* head)
{
    int max = head->data;
    while(head != NULL)
    {
        if(head->data > max) max = head->data;
        head = head->right;
    }
}

//wrong, assume it's BST already, how to fix it ??
int get_min(node* head)
{
    int min = head->data;
    while(head != NULL)
    {
        if(head->data < min) min = head->data;
        head = head->left;
    }
}

int is_sub_max(node* h, int v)
{
    if(h == NULL) return 1;

    int left_less_v  = is_sub_max(h->left, v);
    int right_less_v = is_sub_max(h->right, v);

    return left_less_v&&irght_less_v&&(h->data < v);
}

int is_sub_min(node* h, int v)
{
    if(h == NULL) return 1;

    int left_sub_max  = is_sub_max(h->left, v);
    int right_sub_max = is_sub_max(h->right, v);

    return left_less_v&&irght_less_v&&(h->data < v);
}

int is_bst(node* head)
{
    if(head == NULL) return 1;

    //left is bst, right is bst and curr > max_left and < min_right
    int sub_max = is_sub_max(head->left, head->data);
    int sub_min = is_sub_min(head->right, head->data);

    return (sub_max && sub_min && is_bst(head->left) && is_bst(head->right);
}

//without brutal force search, passdown limit
//when calling this function, write sth like is_bst(root, INT_MIN, INT_MAX);
//or if the bound of the elements of the tree known TREE_MIN, TREE_MAX
int is_bst(node* h, int low, int up)
{
    if(h == NULL) return 1;

    //enhancement if current node not bst, stop and return false 
    if((h->data < up) && (h->data > low)){
        return is_bst(h->left, low, h->data) && is_bst(h->right, h->data, up);
    }
    else {return false;}
}

int main()
{
    return 0;
}

