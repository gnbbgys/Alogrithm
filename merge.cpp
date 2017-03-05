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

/*
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

int merge_lists(int* arr[], int k, int sz, int a[], int nsz)
{
    if(arr == NULL || a == NULL) return ARGUMENT_ERROR;

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
*/

int get_min(int a[], int i, int n)
{
    int min =  i;

    int l_c = 2*i + 1;
    int r_c = 2*i + 2;

    if(l_c < n && a[l_c] < a[i])
    {
        min = l_c;
    }

    if(r_c < n && a[r_c] < a[min])
    {
        min = r_c;
    }
    return min;
}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int parent(int idx)
{
    if(idx % 2 == 0) return (idx-1)/2;
    else return idx/2;
}

void heapify(int a[], int i, int n)
{
    while(i < n)
    {
        int min = get_min(a, i, n);
        if(min == i) break;

        swap(a[min], a[i]);
        i = min;
    }
}

void build_heap(int a[], int n)
{
    for(int idx = (n-1)/2; idx >= 0; --idx)
    {
        heapify(a, idx, n);
    }
}

/*
bool is_heap(int a[],  int n)
{
    for(int idx = 0; idx <= n/2; ++idx)
    {
        if(a[idx] > a[2*idx+1] || a[idx] > a[2*idx+2]){
            return false;
        }
    }
    return true;
}
*/

int main()
{
    int a[] = {42, 12, 9, 14, 21, 22, 56, 32, 6, 18};
    print_array(a, 10);
    build_heap(a, 10);
    print_array(a, 10);
    return 0;
}

