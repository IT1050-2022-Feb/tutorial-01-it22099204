/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int num, i, sum = 0;

  printf("Enter the last number : ");
  scanf("%d", &num);

  // taking the sum of all the numbers till the last number we entered
  for (i = 1; i <= num; ++i) {
    sum = sum + i;
  }

  printf("The final value of all the numbers : %d\n", sum);
  return 0;
}
