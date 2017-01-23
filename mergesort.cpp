//mergsort.c

#include <iostream>

void merge(int a[], int asz, int b[], int bsz, int r[], int rsz)
{
    int ap = 0;
    int bp = 0;
    int rp = 0;

    while(ap < asz && bp < bsz)
    {
        std::cout << rp << ap << bp << std::endl; 
        r[rp++] = (a[ap] < b[bp]) ? a[ap++] : b[bp++];
        std::cout << rp << ap << bp << std::endl; 
    }
    std::cout << " ============ " << std::endl;
    std::cout << rp << ap << bp << std::endl; 
}

int main()
{
    int a[] = {1, 5, 9, 10, 12};
    int b[] = {2, 3, 8, 17, 22};
    int r[10];
    merge(a, 5, b, 5, r, 10);
    return 0;
}

