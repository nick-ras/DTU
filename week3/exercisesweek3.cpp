#include <iostream>
#include <vector>
#include <unistd.h>

int main(){

    int sub_arr_len = 3; //choose the length of the subarray
    std::vector<int> A = {31, 41, -4, 59, 26, -10, 41, 58, -1};
    int length = A.size();
    printf("size of arr is %d", length);
    int sum = 0;
    int sum_start_index;
    for (int i = 0; i <= length - sub_arr_len; i++){
        int sum_temp = 0;
        for (int j = i; j < i + sub_arr_len; j++){
            sum_temp += A[j];
            printf("%d added in inner loop\n", A[j]);
        }
        if (sum_temp > sum){
            sum = sum_temp;
            printf("new sum is %d\n", sum);
            sum_start_index = i;
        }
    };
    printf("Done \n and numbers are %d %d %d ", A[sum_start_index], A[sum_start_index + 1], A[sum_start_index + 2]);

    return 0;
}