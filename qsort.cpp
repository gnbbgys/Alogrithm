#include <iostream>

void swap(int&a, int&b)
{
    int t = a;
    a = b;
    b = t;
}

void print(int a[], int n)
{
    int i = 0;
    while (i<n)
    {
        std::cout << a[i++] << " ";
    }
    std::cout << std::endl;
}

void partion(int a[], int p, int r, int& q, int&t)
{
    int x = a[r];
    int i = p-1;
    int j = p; 
    
    while(j < t)
    {
        if(a[j] == x)
        {
            std::cout << "now switching equal value " 
                << a[j] << " and " << a[t-1] << std::endl;

            swap(a[j], a[--t]);
            continue;
        }

        if(a[j] < x)
        {
            std::cout << "now switching equal value " 
                << a[j] << " and " << a[i+1] << std::endl;

            swap(a[j], a[++i]);
        }

        j++;
    }

    print(a, 10);
    q = i + 1;
    std::cout << "q : " << q << std::endl;

    while(t <= r)
    {
        std::cout << "now switching  " << i+1 << " - "<< a[i+1] 
                  << " and " << t << " - " << a[t] << std::endl; 

        swap(a[++i], a[t++]);
    }

    t = i;
    std::cout << "t : " << t << std::endl;
}


int main()
{
    int a[] = {21, 10, 9, 12, 10, 5, 14, 10, 5, 10};
    int q = 0;
    int t = 9;

    print(a, 10);
    partion(a, 0, 9, q, t);
    std::cout << "===============" << std::endl;
    print(a, 10);

    return 0;
}

