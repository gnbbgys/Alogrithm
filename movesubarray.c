#include "movesubarray.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "util.h" 


//         pos
//[ 0,  1,  2,  3,  4, 5, 6]
//naive method, use temporary memory copy
void movesubarray1(int arr[], int sz, int pos)
{
    //checking.
    //check not empty array
    //check pos not beyond sz
    //check pos = 0 do nothing 
    if(sz <= 0)  return;
    if(pos > sz) return;
    if(pos == 0) return;

    //use heap
    int* tmp = (int*) malloc(sizeof(int)*pos);

    memcpy(tmp, arr, sizeof(int)*pos); //copy to tmp mem
    memcpy(arr, arr+pos, sizeof(int)*(sz-pos));
    memcpy(arr+(sz-pos), tmp, sizeof(int)*pos);

    free(tmp);
}

//mod of pos, circular way to do it
//delicate method
void movesubarray2(int arr[], int sz, int pos)
{

}

//use reverse 
void movesubarray3(int arr[], int sz, int pos)
{

}

