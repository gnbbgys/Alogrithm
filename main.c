

#include <stdio.h>
#include <stdlib.h>

#include "util.h"
#include "movesubarray.h"

int main(int argc, char* argv[])
{

    printf("I am in the main to test ... \n");

    int arr[12] = {0};
    gen_random(50, arr, 10);
    print_array(arr, 12);

    //movesubarray1(arr, 10, 3);
    movesubarray2(arr, 12, 3);

    print_array(arr, 12);

    return 0;
}
