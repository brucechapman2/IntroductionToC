#include "Headers.h"



void main()
{
   printf("****            ARRAYS\n");

   // Arrays are an ordered sequence of items of the same type.
   // Think of a line of cars parked in 1 line of a car park.
   // Who is in slot 3? Who is in slot 6? We can ask questions like that.
   // We can do something to all the cars between slot 3 and slot 6 - maybe give them a parking ticket?
   // Lets make an array of 10 int's
   int myArray[10];

   // Array indexing (the way we look at individual items in the array) starts at 0.
   // So the first element in the array is at index 0
   // The second is at index 1
   // etc

   // Be careful in C!
   // Here we have said we want to beable to use an array of 10 int's.
   // And that's exactly what we have been given.... the space for 10 int's
   // But the values in there at the moment might be any old rubbish
   // Let's find out!
   for (int i = 0; i < 10; ++i)
   {
      printf("Array element %d has value %d\n", i, myArray[i]);
   }
   printf("\n");

   // Aha - so there's some rubbish in there. Or is it?
   // Let's translate the numbers in to hex and have another look
   for (int i = 0; i < 10; ++i)
   {
      printf("Array element %d has hex value %x\n", i, myArray[i]);
   }
   printf("\n");
   // If we are running a debug build, you will probably find this value is "cccccccc"
   // Not so random after all. This is the debug system trying to let us find bugs more easily.
   // Try running it as a release build and see if you get the same.



   // So, we need to put some values in our array
   for (int i = 0; i < 10; ++i)
   {
      myArray[i] = 10 * i;
   }

   // Now let's see what's in there
   for (int i = 0; i < 10; ++i)
   {
      printf("Array element %d has value %d\n", i, myArray[i]);
   }


   printf("\n\n\n\n\n");
}