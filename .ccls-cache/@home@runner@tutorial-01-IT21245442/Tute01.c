/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) {

  int sub1, sub2;
  float total, average;

  printf("Enter marks for Subject 1 : ");
  scanf("%d", &sub1);
  printf("Enter marks for Subject 2 : ");
  scanf("%d", &sub2);

  total = sub1 + sub2;

  average = total / 2.0;

  printf("Your average is : %.2f", average);

  return 0;
}
