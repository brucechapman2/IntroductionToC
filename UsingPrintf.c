#include "Headers.h"



int main()
{
   printf("****            USINGPRINTF\n");

   // printf is a useful but tricky function, but we will beusing it a lot to pront stuff to the screen
   // so we can see what's going on

   // Start by printing a string - nice and simple
   printf("Here is a simple string\n");

   // The "\n" bit at the end is a newline. Otherwise it will keep going on the same line as before.
   // Let's see that in action
   printf("First bit ");
   printf("Second bit ");
   // Ooops!

   printf("\n\n");

   // Let's printf an int
   int x = 4;
   printf("Here's an int %d", x);
   // %d is a placeholder in the string
   // and we tell it whatvalue to use by giving it the "x" as an extra parameter

   // We can have multiple placeholders in a single string
   int y = 6;
   int z = 9;
   printf("Here's the first int %d, and now the second %d", y, z);

   // There are other sorts of integer values
   short s = 2;   // 2 bytes
   int i = 4;  // 4 bytes
   long l = 6; // 4 bytes in 32 bit code, 8 bytes in 64 bit code

   unsigned short us = 3;
   unsigned int ui = 5;
   unsigned long ul = 7;




   // char - an alphanumneric character. 1 byte
   char c;
   c = 'B'; // single quotes for a char
   printf("Here comes a char: %c\n", c);

   // a string (which is a sequence of characters)
   char* aString = "Strings use double quotes";
   printf("Here comes a string: %s\n", aString);

   // Nice and simple - an integer
   int xyz;
   xyz = 42;
   printf("Here comes an int: %d\n", xyz);

   // A float and a double. They are both floating point numbers. 
   // A double uses 8 bytes of RAM whereas a float only uses 4, so a double has a much bigger range
   float aFloat = 4.123;
   double aDouble = 8.123;
   printf("Here comes a float %f and a double %lf\n", aFloat, aDouble);

   printf("\n\n\n\n\n");
}