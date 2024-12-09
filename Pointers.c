#include "Headers.h"




void Pointers()
{
   int x;
   x = 42;
   int* pointerToX;
   pointerToX = &x;
   printf("pointerToX points in to memory where x (or maybe we should say the value of x) lives\n");
   printf("Value of x is %d and is stored at memory location %p\n", x, pointerToX);


   char* aString = "This is a string";
   printf("aString has value %s\n", aString);
   size_t lengthOfAString;
   lengthOfAString = strlen(aString);
   printf("The length of aString is %zu\n", lengthOfAString);

   char anotherString[] = { 'a','n','o','t','h','e','r',' ','s','t','r','i','n','g', 0 };
   printf("anotherString has value %s\n", anotherString);
   printf("The length of anotherString is %zu\n", strlen(anotherString));

   printf("A string is an array of characters. The string ends when the next character value is zero\n");
   printf("So, although anotherString is a string of length %zu, in memory it uses an extra byte to mark the end\n", strlen(anotherString));

   printf("Strings are arrays of characters. Each character uses 1 byte of storage.\n");
   printf("The value of a variable that is an array is actually a pointer to the first element.\n");

}