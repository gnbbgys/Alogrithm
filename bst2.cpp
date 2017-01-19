
#include <iostream>

node* newNode(int v)
{
    return new node(v);
}


// arr = [1, 2, 3, 4, 5, 6, 7, 8]
// calling   
// bstFromSortedArray(arr, 0, 7)
//      bstFromSortedArray(arr, 0, 2)
//           bstFromSortedArray(arr, 0, 0)
//           bstFromSortedArray(arr, 2, 2)
//           create mid node 
//      bstFromSortedArray(arr, 4, 7)
//           bstFromSortedArray(arr, 4, 4)
//           bstFromSortedArray(arr, 6, 7)
//                 NULL 
//                 bstFromSortedArray(arr, 7, 7)
//                 create mid node 6 
node* bstFromSortedArray(int arr[], int low, int high)
{
    if(low == high) {
        return newNode(arr[low]);
    }

    int mid = (low + high)/2;
    node* leftTree = NULL;
    node* rightTree = NULL;

    if(mid-1>=low) {
        leftTree  = bstFromSortedArray(arr, low, mid-1);
    }
    if(mid+1<=high){
        rightTree = bstFromSortedArray(arr, mid+1, high);
    }

    node* curr = newNode(arr[mid]);
    curr->left  = leftTree;
    curr->right = rightTree;

    return curr;
}


