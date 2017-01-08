

#include <stdio.h>
#include <stdlib.h>

#include "util.h"
#include "movesubarray.h"

int main(int argc, char* argv[])
{
    //int arr[] = {4, 6, 2, 1, 11, 9, 23, 12};
    //movesubarray(arr, 2);

    printf("I am in the main to test ... \n");

    int arr[10] = {0};
    gen_random(50, arr, 10);
    print_array(arr, 10);

    movesubarray1(arr, 10, 3);

    print_array(arr, 10);

    return 0;
}
