#include <iostream>

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

//partition with equal pivot elements
void partition(int a[], int lo, int hi)
{
    if(lo >= hi) return;

    int pivot = a[lo];
    int i = lo;

    while(i < hi)
    {
        if(a[i] < pivot) {
            swap(a[i], a[lo]);
            lo++;
            i++;
        }
        else if(a[i] > pivot){
            swap(a[hi], a[i]);
            hi--;
        }
        else if(a[i] == pivot){
            i++;
        }
    }
}

//bolt and nuts algorithm


void print_arr(int a[], int sz)
{
    int i = 0;
    while(i < sz)
    {
        std::cout << a[i++] << " ";
    }

    std::cout << std::endl;
}


void matching_bolts(char bolts[], char nuts[], int sz)
{
    //nlogn algorithm using partition
}

int main()
{
    /*
    int a[10] = {10, 13, 5, 10, 9, 5, 12, 23, 9, 10};

    print_arr(a, 10);
    partition(a, 0, 9);
    print_arr(a, 10);
    */

    char bolts[] = {'a', 'g', 'c', 'i', 't', 'b', 'w', 'y'};
    char nuts[]  = {'t', 'w', 'i', 'g', 'c', 'y', 'a', 'b'};

    matching_bolts(bolts, nuts, 8);

    return 0;
}
