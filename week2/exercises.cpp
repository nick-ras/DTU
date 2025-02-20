#include <iostream>
#include <vector>
#include <unistd.h>

int main(){
    std::vector<int> A = {31, 41, 59, 26, 41, 58};
    int n = 6;
    int key, j;
    for(int i = 1; i < n; i++){
        key = A[i];
        j = i - 1;
        while j >= 0 && A[j] < key{
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <unistd.h>

// int main(){
//     std::vector<int> A = {31, 41, 59, 26, 41, 58};
//     int n = 6;
//     int key, j;
//     for(int i = 1; i < n; i++){
//         key = A[i];
//         j = i - 1;
//         while j >= 0 && A[j] < key{
//             A[j + 1] = A[j];
//             j = j - 1;
//         }
//         A[j + 1] = key;
//     }

//     return 0;
// }