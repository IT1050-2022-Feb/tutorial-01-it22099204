/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>
// function declaration
int minimum(int NO1, int NO2);
int maximum(int NO1, int NO2);
int multiply(int NO1, int NO2);

int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}
// function implementation
int minimum(int NO1, int NO2) {
  if (NO1 < NO2) {
    return NO1;
  } else {
    return NO2;
  }
}
int maximum(int NO1, int NO2) {
  if (NO1 > NO2) {
    return NO1;
  } else {
    return NO2;
  }
}
int multiply(int NO1, int NO2) { return NO1 * NO2; }
