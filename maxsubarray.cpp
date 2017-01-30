
#include <iostream>
#include <limits.h>


// for subarray that cross the mid point
void find_max_subarray_cross(int arr[], int low, int mid, int high)
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

    return left_max + right_max;
}

int find_max_subarray(int arr[], int low, int high)
{
    if(low == high) return arr[low];

    int mid = (low + hight)/2;

    int left_max  = find_max_subarray(arr, low,   mid);
    int right_max = find_max_subarray(arr, mid+1, high);
    int cross_max = find_max_subarray_cross(arr, low, mid, high);

    return max(left_max, right_max, cross_max);
}

int find_max_subarray_linear(int arr[], int sz, int& low, int& high)
{
    int max  = arr[0];
    int lpos = 0;
    int hpos = 0;
    int max_so_far = arr[0];
    for(int idx = 1; idx < sz;  ++idx)
    {
        if(max_so_far < 0) max_so_far = 0;

        if(max_so_far + arr[idx] > max) {
            hpos = idx;
            max = max_so_far + arr[idx];
            max_so_far += arr[idx];
        }

    }
}

int main(){
    int arr[] = {11, -2, 3, 9, -1, 10, 21, -12, 32, 18};
    size_t arr_sz = sizeof(arr)/sizeof(arr[0]);
    int mid = arr_sz/2;
    find_max_subarray(arr, 0, mid, arr_sz-1);

    return 0;
}
