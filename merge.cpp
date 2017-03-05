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
