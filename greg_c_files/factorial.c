#include <stdio.h>

int factorial(int seed) {
    int result = 1;

    for (int i = 1; i <= seed; i++) {
        result = i * result;
    }
        return result;
}

int main(void) {
    
    int seed;

    printf("Please give seed value (positive integer): \n");
    scanf("%d", &seed);

    printf("The factorial of %d is %d\n", seed, factorial(seed));

    return 0;
}