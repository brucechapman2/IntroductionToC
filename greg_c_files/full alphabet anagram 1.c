#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// lowercase, user inputs 2 strings, program determines if the 2 strings are anagrams of each other

void string_to_array(const char* user_input, int alpha_array[]) {
    int length = strlen(user_input);
    for (int i = 0; i < length ; i++) {
        alpha_array[user_input[i] - 'a']++;
    }
}

// determines if two ascii totals are equal.
bool anagram_calc(int alpha_array1[], int alpha_array2[]) {
    for (int i = 0; i < 26; i++) {
        if (alpha_array1[i] != alpha_array2[i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char user_input1[100];
    char user_input2[100];
    int alpha_array1[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int alpha_array2[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    printf("Enter string 1: ");
    scanf("%99s", user_input1);

    printf("\nEnter string 2: ");
    scanf("%99s", user_input2);

    string_to_array(user_input1, alpha_array1);
    string_to_array(user_input2, alpha_array2);

    if (anagram_calc(alpha_array1, alpha_array2) == true) {
        printf("Anagram - your two inputs are anagrams.");
    }
    else {
        printf("Not anagram - your two inputs are not anagrams.");
    }
}