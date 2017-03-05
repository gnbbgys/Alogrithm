#include <iostream>
#include <string.h>

void print_matrix(int** a, int k, int p)
{
    for(int idx = 0; idx < k; ++idx)
    {
        for(int pos = 0; pos < p; ++pos)
        {
            std::cout << a[idx][pos] << " "; 
        }
        std::cout << std::endl; 
    }
}

void print_array(int a[], int n)
{
    for(int idx = 0; idx < n; ++idx)
    {
        std::cout << a[idx] << " "; 
    }
    std::cout << std::endl; 
}

int find_min(int a[][], int p[], int k, int n)
{
    int min = a[0][p[0]];
    int lis = 0;

    for(int l = 1; l < k; ++l)
    {
        if(p[l] >= n) continue;

        if( min > a[l][p[l]] )
        {
            min = a[l][p[l]];
            lis = l;
        }
    }

    p[lis]++;
    return min;
}

void mergekarray(int a[][], int k, int n, int b[])
{
    int* p = new int [k]; //track the position of each list
    memset(p, 0, sizeof(int)*k);

    int count = 0;
    while(count < k*n)
    {
        int min = find_min(a, p, k, n);
        b[count++] = min;
    }

    delete [] p;
}

int main()
{
    int** b = new int* [4];
    for(int idx = 0; idx < 4; 
    b[0] = new int [5]

    b[0] = {2, 9, 12, 42, 56};
    b[1] = {1, 4, 15, 26, 89};
    b[2] = {6, 9, 19, 52, 78};
    b[3] = {4, 17, 23, 21, 65};

    print_matrix(b, 4, 5);
    int* r = new int [20];

    mergekarray(b, 4, 5, r);
    print_matrix(b, 4, 5);

    //delete 
    //std::for_each(); transform
    for(int pos = 0; pos < 10; ++pos)
    {
        delete [] b[pos];
    }

    delete [] b;
    delete [] r;

    return 0;
}

//======================
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


