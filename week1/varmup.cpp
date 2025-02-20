#include <iostream>
#include <list>
#include <array>
#include <unistd.h>

/*
1.
1.1. anden eksponent
1.2. faktor 2
1.3. faktor 1
1.4. anden eksponent og så halvdelen

2.1 {1, 3, 5}
f({1, 3, 5, 7, 9}, 4)
return f({1, 3, 5, 7, 9}, 4 - 1) + 7
return f({1, 3, 5, 7, 9}, 3) + 7 + 6
return f({1, 3, 5, 7, 9}, 2) + 7 + 6 + 5
return f({1, 3, 5, 7, 9}, 1) + 7 + 6 + 5 + 4
return 7 + 6 + 5 + 4 + 3 + 2 + 1

2.2
*/     

int f(std::array<int, 5>& A, int n) {
    if (n == 0) {
        return 0;
    } else {
        return f(A, n - 1) + A[n - 1];
    }
}

int func1 (std::array<int, 5>& A, int n){
    int sum = 0;
    for(int i = n - 1; i >= 0; i--) {
        sum += A[i];
    }
    return sum;
}


/*
3 --> read 2 ints from stdin --> write sum to stdout


void inout(){
    char buf[10];
    read(0, buf, 3);
    write(1, buf, 3);
}
*/

/*
4 --> disease opgave
Det er 2*7
Halver og find den gruppe der er langsom
halver igen og find langsom gruppe etc..

*/

/*
5 --> 
*/



int main() {
    // std::array<int, 5> A = {1, 3, 5, 7, 9};
    // int n = 4;
    // int sum1 = f(A, n);
    // int sum2 = func1(A, n);
    // printf("Sum: %d\n %d\n", sum1, sum2);

    // inout();
    return 0;
}

/*
BINARY*/


/* 
dag 1
https://courses.compute.dtu.dk/02105/2025/part1/1introduction/introduction-weekplan.pdf
induktinoshypotese
algo bog kap 1
regler for støtte kursus kaffe og akasse
MERGE - kan du bruge samme heap array i recursion?
*/