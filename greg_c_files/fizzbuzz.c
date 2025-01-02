#include <stdio.h>

int main() {
  
  int counter = 1;

  for (counter = 1; counter < 101; counter ++) {
    if (counter % 3 == 0 && counter % 5 == 0) {
      printf("FizzBuzz\n");
      continue;
    }
    if (counter % 3 == 0) {
      printf("Fizz\n");
      continue;
    }
    if (counter % 5 == 0) {
      printf("Buzz\n");
      continue;
    }
    else {
      printf("%d\n", counter);
    }
  }
  }