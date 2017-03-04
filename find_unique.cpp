#include <iostream>

int find_unique(int a[], int sz)
{
    int x = 0;
    int y = 0;
    int z = 0;
    for(int i = 0; i < sz; ++i)
    {
        std::cout << "x, y, z" << x << " " << y << " " << z << std::endl;
        //x = x^a[i];

        //y does not guarantee to be store elements happen 2 times 
        //y = x^a[i]; 

        y ^= x & a[i];
        x ^= a[i]; 
        std::cout << "x, y, z" << x << " " << y << " " << z << std::endl;

        z = ~(x&y);
        x = x & z;
        y = y & z;
    }

    return x;
}

int main()
{
    int a[] = {12, 11, 12, 11, 18, 11, 12, 18, 9, 18};
    int ret = find_unique(a, 10);
    std::cout << ret << std::endl; 
    return 0;
}
