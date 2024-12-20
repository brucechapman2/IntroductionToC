#include "Headers.h"


void Scope()
{
   printf("****            SCOPE\n\n");

   // Scope is to do with named things and where they have meaning.
   // In the real world. think of 2 different houses.
   // "Mum" in one house is not the same "Mum" as the other house, even though they have the same name.
   // We have the same sort fo concept in programming.
   // In C, the "house" concept is represented by curly brackets {}
   // This function that I called "Scope" has its own curly brackets.
   // So if we decalre an int here...
   int x;
   x = 234;
   // this is a different "x" to any other "x" in the program

   // We can even have multiple scopes inside a function.
   // So, I can just add in some more curly brackets and decalre another "x"...


   {
      int x;
      // Now this x is different to the first one and can have a different value.
      // It is a completely different variable.
      x = 456;

      // Lets test this.
      // First print this x
      printf("The second x has value %d\n", x);
      // Now we're going to leave this scope (i.e. we are going to move outside these curly brackets
   }

   // Now we're outside the inner curly brackets and back in a differnt scope.
   // Let's try printing x again. This time we should get the first x
   printf("The first x has value %d\n", x);


   printf("****            \n\n\n\n");
}