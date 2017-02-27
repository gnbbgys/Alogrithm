
#include <iostream>

int min(int r, int left, int right)
{
    int m_c = (left < right) ? left : right;
    return (r < min_c) ? r : min_c;
}

void swap(int& a, int& b)
{
    int t = b;
    b = a;
    a = t;
}

void heapify(int a[], int n, int r)
{
    if(r>=n) return;

    int l = r;
    int left  = 2*r + 1;
    int right = 2*r + 2;

    if(left < n && a[r] > a[left]) l = left;
    if(right< n && a[l] > a[left]) l = left;

    if(l != r) heapify(a, n, l);
}

void build_heap(int a[], int n)
{
    for(int i = n/2; i > 0; --i)
    {
        heapify(a, n, i); 
    }
}

int heap_compare(int a[], int idx, int count, int v)
{
    
}

void print_array(int arr[], int n)
{
    int i = 0;
    while(i < n)
    {
        print("%d ", arr[i++]);
    }
    print("\n");
}

int main()
{
    int a[] = {11, 2, 4, 1, 9, 6, 22, 3, 12};
    print_array(a, 9);
    build_heap(a, 9);
    print_array(a, 9);
    return 0;
}

