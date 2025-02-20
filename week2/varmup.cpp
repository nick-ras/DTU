#include <iostream>
#include <array>
#include <unistd.h>
#include <vector>

/*1.2 */
int main(){
    std::vector<int> A = {31, 41, 59, 26, 41, 58};
    int n = 6;
    int key, j;
    for(int i = 1; i < n; i++){
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] < key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", A[i]);
    }

    return 0;
}

/*
1.4
Put in a number in sorted array and find its position.

59 58 41 41 31 26
find midte = n / 2 + 1
Hvis højere så tage midte af n / 2 + 1 og n.. som er noget lignede n / 0,75. og tjek igen om højere eller lavere

1.5 du kunne gøre det for de ALLEREDE sortedede elementer, så hvis de første 12 elementer er sorteret,
så kan du bruge binary serach til at finde pladsen for det element (som man har konstateret er 
lavere end tolvte elemente og derfor skal rykke til venstre
*/
