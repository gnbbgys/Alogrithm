#include <iostream>

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

int main()
{
    int* c = new int[10];
    memset(c, 0, 10*sizeof(int));
    print_array(c, 10);
    delete [] c;

    int* a = new int(10);
    std::cout << *a << std::endl; 
    delete a;

    int** b = new int* [10];
    int pos = 0;
    int sample[] = {1, 2, 3, 4, 5};
    for(pos = 0; pos < 10; ++pos)
    {
        b[pos] = new int [5];
        memcpy(b[pos], sample, sizeof(int)*5);
    }

    print_matrix(b, 10, 5);
    for(pos = 0; pos < 10; ++pos)
    {
        delete [] b[pos];
    }

    delete [] b;

    return 0;
}
