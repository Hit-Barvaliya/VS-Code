#include <stdio.h>
#include <string.h>

void printCyclicPermutations(char strings[][101], int n) {
    // Generating cyclic permutations
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s ", strings[(i + j) % n]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    char strings[n][101]; // Assuming maximum string length is 100
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // Calling the function to print cyclic permutations
    printCyclicPermutations(strings, n);

    return 0;
}
