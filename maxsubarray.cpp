
#include <iostream>
#include <limits.h>


// for subarray that cross the mid point
void find_max_subarray(int arr[], int low, int mid, int high)
{
    int temp_max = 0;
    int left_idx = mid;
    int left_max = INT_MIN;
    for(int idx = mid, idx >= 0; idx++)
    {
        int temp_max += arr[idx];
        if( temp_max > left_max ){
            left_max = temp_max;
            left_idx = idx;
        }
    }


    temp_max  = 0;
    int right_idx = mid+1;
    int right_max = INT_MIN;
    for(int idx = mid+1; idx < high; idx++)
    {
        temp_max += arr[idx]; 
        if(temp_max > right_max) {
            right_idx = idx;
            right_max = temp_max;
        }
    }

    std::cout << "" << std::end;

}


int main(){
    int arr[] = {11, -2, 3, 9, -1, 10, 21, -12, 32, 18};
    size_t arr_sz = sizeof(arr)/sizeof(arr[0]);
    int mid = arr_sz/2;
    find_max_subarray(arr, 0, mid, arr_sz-1);

    return 0;
}
