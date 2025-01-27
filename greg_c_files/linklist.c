#include "Headers.h"




typedef struct ListItem
{
   int value;
   struct ListItem* nextListItem;
} ListItem;














ListItem* CreateNewListItem(int value)
{
   ListItem* listItem = malloc(sizeof(ListItem));
   if (listItem)
   {
      listItem->nextListItem = NULL;
      listItem->value = value;
   }
   return listItem;
}






ListItem* CreateNewList()
{
   ListItem* startOfList = NULL;
   for (int i = 0; i < 1000000; ++i)
   {
      int randomNumber = rand();
      ListItem* newItem = CreateNewListItem(randomNumber);
      newItem->nextListItem = startOfList;
      startOfList = newItem;
   }
   return startOfList;
}




void FreeList(ListItem* list)
{
   int count = 0;
   while (list)
   {
      ListItem* next = list->nextListItem;
      free(list);
      ++count;
      list = next;
   }
   printf("Freed %d items in the list\n", count);
}






void PrintList(ListItem* list)
{
   printf("Printing list....\n");
   while (list)
   {
      printf("List item value: %d\n", list->value);
      list = list->nextListItem;
   }
   printf("Finished printing list\n");
}




ListItem* CreateNewList2()
{
   ListItem* startOfList = NULL;
//   for (int i = 0; i < 1000; ++i)
//   {
//      int randomNumber = rand();
//      ListItem* newItem = CreateNewListItem(randomNumber);
//      newItem->nextListItem = startOfList;
//      startOfList = newItem;
//   }
   return startOfList;
}






void UserDefinedDataType()
{
   ListItem* list = CreateNewList();
   PrintList(list);
   FreeList(list);


   // Now change CreateNewList2() so we 
   // end up with the items in numerical order.


   ListItem* list2 = CreateNewList2();
   PrintList(list2);
   FreeList(list2);
}


