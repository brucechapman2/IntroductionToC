#include <stdio.h>
#include <stdbool.h>

// Program to output a future date based on user input of date and number of days user wants to add to that date



// Function to check if year is a leap year

bool leapYearCalculator(int* yy) {
  if (*yy % 400 == 0) {
    return true;
} else if (*yy % 4 == 0 && *yy % 100 != 0) {
      return true;
} else {
      return false;
}
}

// Function to calculate a future date from  current date and a number of days to add
void add_days_to_date(int* mm, int* dd, int* yy, int* days_left_to_add) {
// 13-item array. using initial array value of 0 to make the index match 1-12 month convention
  int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Using leap year calculator func
  if (leapYearCalculator(yy) == true) {
    days_in_month[2] = 29;
  }

// Set day of month to value of days_surplus if adding days does not increment month
  while (*days_left_to_add > 0) {
    (*dd)++;
    (*days_left_to_add)--;
    if (*dd > days_in_month[*mm]) {
      *dd = 1;
      (*mm)++;
      if (*mm >= 13) {
        (*yy)++;
        (*mm) -= 12;
      }
    }
  }
}

int main() {
//  printf("input year:\n");

//  int year;
//  scanf("%d", &year);

//  if (leapYearCalculator(year)) {
//    printf("Leap Year\n");
//  } else {
//    printf("Not Leap Year\n");
  
  int mm, dd, yy, days_left_to_add;

  printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date: ");
  scanf("%d %d %d %d", &mm, &dd, &yy, &days_left_to_add);
  
  add_days_to_date(&mm, &dd, &yy, &days_left_to_add);

  printf("new date is: %d, %d, %d", mm, dd, yy);
  
  return 0;  
  }
