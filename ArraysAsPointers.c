#include "Headers.h"



int main()
{
   // Arrays are an ordered sequence of items of the same type as we found out in the function Arrays()
   // They live in RAM as one blob of memory
   int myArray[10];
   // So myArray takes up 40 bytes of RAM. 10 items of 4 bytes each. Each int takes up 4 bytes

   // So, lets put some values in our array like we did before
   for (int i = 0; i < 10; ++i)
   {
      myArray[i] = 2 * i;
   }

   // Now let's see what's in there
   for (int i = 0; i < 10; ++i)
   {
      printf("Array element %d has value %d\n", i, myArray[i]);
   }

   // C can be terse.
   // myArray is an array, but we can use the value of the variable myArray in an unexpected way
   // myArray is actually implemented as a pointer
   printf("Lets print the vaue of myArray as a pointer: %p\n", myArray);

   // Let's put its value in a variable of type "pointer to int"
   int* asAPointer = myArray;
   printf("asAPointer has value %p\n", asAPointer);

   // And if we have a look to see what "asAPointer" is pointing at.....
   // It should be an int because we told the compiler that it is a "pointer to int" (that's the int* bit)
   printf("asApointer is pointing to an int that has value %d\n", *asAPointer);


   // A string in C is a pointer to an array of characters. The end of the string is marked with a zero
   // Here are 3 ways to decalre a string.
   // Here is the easiest way to declare a string
   char* SillyString = "A string";
   // Here we explicitly say it is an array, but this one and the one before are implemented EXACTLY THE SAME WAY.
   char AnotherSillyString[] = "A string";
   // Another way to declare it, char by char. In this case we can see the terminating zero that we have to put in explicitly.
   // The other 2 examples also have the zero, but the compiler does it for us silently and 
   // automatically in those cases because it uses the double quotes ".
   char YetAnotherSillyString[] = { 'A', ' ','s','t','r','i','n','g', 0};

   printf("Show the string %s\n", SillyString);
   printf("Show the string %s\n", AnotherSillyString);
   printf("Show the string %s\n", YetAnotherSillyString);

   int length = strlen(SillyString);
   printf("The length of the string is %d characters (NOT COUNTING THE TERMINATING ZERO)\n", length);

   // We can count the characters ourselves. We know the string ends with a zero, so we can use a loop
   // that keeps going until it finds a zero.
   int numberOfCharacters = 0;
   char* pointerForLoop = SillyString;
   while (*pointerForLoop)
   {
      pointerForLoop = pointerForLoop + 1;
      numberOfCharacters = numberOfCharacters + 1;
   }
   printf("The number of characters is %d\n", numberOfCharacters);

   // Another way of doing the same counting...
   pointerForLoop = SillyString;
   while (*pointerForLoop++);
   printf("The number of characters (version 2) is %d\n", (int)(pointerForLoop - SillyString - 1));

   printf("\n\n\n\n\n");
}