#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Initialize random seed
    srand(time(0));

    // Generate a random number
    n = rand() % 201 - 100; // Generates a number between -100 and 100

    printf("Last digit of %d is %d and is ", n, abs(n % 10));

    if (abs(n % 10) > 5) {
        printf("greater than 5\n");
    } else if (abs(n % 10) == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }

    return 0;
}
