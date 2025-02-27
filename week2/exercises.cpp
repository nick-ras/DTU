#include <iostream>
#include <vector>
#include <unistd.h>

int main(){ //INSERTION SORT
    int A[] = {31, 41, 59, 26, 41, 58};
    int n = sizeof(A) / sizeof(A[0]);
    int key, j;
    for(int i = 1; i < n; i++){
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) {
            int tmp = A[j + 1];
            A[j + 1] = A[j];
            A[j] = tmp;
            j = j - 1;
        }
    }
    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }

    return 0;
}