//print_array.h

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "util.h"

void print_array(int arr[], int sz)
{
    //err checking
    if(sz<=0) {
        printf("Empty array");
        return;
    }

    printf(" ==== print out array ==== \n");
    int idx = 0;
    while(idx<sz)
    {
        printf("%d ", arr[idx]);
        idx++;
    }
    printf("\n ==== end of print array ==== \n");
}

int  gen_random(int mod, int arr[], int sz)
{
    if(sz <= 0) return;

    srand(time(NULL));

    int idx = 0;
    for(; idx < sz; idx++)
    {
        arr[idx] = rand() % mod;
    }
}
