#include<stdio.h>
#include<string.h>

int main() {

  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};
  char s1[] = "abcd";
  char s2[] = "dcaaaab";
  int flag = 1;

  // counter logic s1
  for (int i = 0; i < strlen(s1); i++) {
    switch (s1[i]) {
      case 'a':
        counter1[0] = counter1[0] + 1;
        break;
      case 'b':
        counter1[1] = counter1[1] + 1;
        break;
      case 'c':
        counter1[2] = counter1[2] + 1;
        break;
      case 'd':
        counter1[3] = counter1[3] + 1;
        break;
        }    
    }
  
  // counter logic s2
  for (int j = 0; j < strlen(s2); j++) {
    switch (s2[j]) {
      case 'a':
        counter2[0] = counter2[0] + 1;
        break;
      case 'b':
        counter2[1] = counter2[1] + 1;
        break;
      case 'c':
        counter2[2] = counter2[2] + 1;
        break;
      case 'd':
        counter2[3] = counter2[3] + 1;
        break;
        }    
    }

    // compare counters
    for (int k = 0; k < 4; k ++) {
      if (counter1[k] != counter2[k]) {
        flag = 0;
      }
    }
    if (flag == 1) {
      printf("Anagram!");
      }
    else {
      printf("Not Anagram!");
    }

    
}