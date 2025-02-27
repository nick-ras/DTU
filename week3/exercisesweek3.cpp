#include <iostream>
#include <vector>
#include <unistd.h>

int main(){
    std::vector<int> A = {31, -40, -4, 59, 26, -10, 41, 58, -1};
    int length = A.size();
    printf("size of arr is %d\n", length);
    int sum = 0;
    int start = 0;
    int end = 0;;
    for (int i = 0; i < length; i++){
        int tmp[length] = {0};
        for (int j = i; j < length; j++){
            if (j == i){
                tmp[j] = A[j];
            }
            else if (j > i){
                tmp[j] = tmp[j - 1] + A[j];
            }
            else{
                printf("ERROR in loop i: %d j: %d\n", i, j);
                exit(1);
            }
        }
        printf("numbers in subarray: "); // DEBBUGGING
        for (int y = i; y < length; y++){
            printf("%d ", tmp[y]);
        }
        printf("\n\n");
        for (int g = i; g < length; g++){ //COMP WITH EXISTING MAX SUM
            if (tmp[g] > sum){
                sum = tmp[g];
                start = i;
                end = g;
                printf("New max sum: %d\n start is: %d\n end is %d\n", sum, start, end);
            }
        }

    }
    printf("Max sum is: %d and start and end indices are: %d and %d\n", sum, start, end);
    return 0;
}