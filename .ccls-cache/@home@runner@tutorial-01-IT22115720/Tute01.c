/* Exercise 1 - Calculations

  Write a C program to input marks of two subjects. Calculate and print the
  average of the two marks. */

#include <stdio.h>
int main() {

  int num1, num2, sum = 0;
  float avg;

  printf("Enter subject 1 marks:");
  scanf("%d", &num1);

  printf("Enter subject 2 marks:");
  scanf("%d", &num2);

  sum = num1 + num2;

  avg = sum / 2;

  printf("Average marks is:%.2f", avg);
  return 0;
}