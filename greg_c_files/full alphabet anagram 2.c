#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// testing if can I rely on multiplying ascii values together for a quick and dirty solution?

// multiplies each element of ascii int array together
int ascii_multiplier(const char* user_input, int length) {
    int result = 1;
    for (int i = 0; i < length; i++) {
        result *= user_input[i];
    }
    return result;
}

// determines if two ascii totals are equal.
bool anagram_calc(int result1, int result2) {
    if (result1 == result2) {
        return true;
    }
    else {
        return false;
    }
}

int main(void) {
    char user_input1[100];
    char user_input2[100];
    
    printf("Enter string 1: ");
    scanf("%99s", user_input1);

    printf("\nEnter string 2: ");
    scanf("%99s", user_input2);

    bool comparison_result;

    if ((anagram_calc(ascii_multiplier(user_input1, strlen(user_input1)), ascii_multiplier(user_input2, strlen(user_input2)))) == true) {
        printf("Anagram - your two inputs are anagrams.");
    }
    else {
        printf("Not anagram - your two inputs are not anagrams.");
    }

    return 0;
}


    /* 
    It runs and is right!

    pros - logically simple
    cons - can be wrong, especially for shorter strings
    */