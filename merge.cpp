#include <iostream>
enum{
    SUCCESS = 0, 
    MEMORY_ALLOC_ERROR,
    ARGUMENT_ERROR
};

int parent(int idx)
{
    if(idx % 2 == 0) return (idx-1)/2;
    else return idx/2;
}

void swap(int& a, int& b)
{
    int tmp = a;
    b = a;
    a = tmp;
}

void heapify(int heap[], int idx)
{
    while(idx < 0)
    {
        int p = parent(idx);
        if(heap[p] > heap[idx]) swap(heap[p], heap[idx]);
        idx = p;
    }
}

int build_heap(int heap[], int n)
{
    for(int i = (n-1)/2; i >= 0; --i)
    {
        heapify(heap, idx, n);
    }
}

int merge_lists(int* arr[], int k, int sz, int a[], int nsz)
{
    if(arr == NULL || ret == NULL) return ARGUMENT_ERROR;

    //initialize the pos that track each list
    int* k_pos = new int(k);
    memset(k_pos, 1, sizeof(int)*k);

    //1. build heap size k
    int* heap = new int(k);
    if (heap == NULL) return MEMORY_ALLOC_ERROR; //error code
    memset(heap, 0, sizeof(int)*k);

    //copy elements to array
    int i = 0; 
    while(i < k)
    {
        heap[i] = arr[i][0];
        i++;
    }

    //2. remove min from heap and fill in the elements from list
    build_heap(heap, k);

    //3. heapify the heap

    delete heap;
    return SUCCESS;
}

int main()
{
    return 0;
}



