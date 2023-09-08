#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Initialize random seed
    srand(time(0));

    // Generate a random number
    n = rand() % 201 - 100; // Generates a number between -100 and 100

    printf("%d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}
