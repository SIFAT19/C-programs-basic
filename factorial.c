#include <stdio.h>
int factorial();
int main() {
  int a;
  printf("Enter number:");
  scanf("%d", &a);
  printf("The vale of %d is %d", a, factorial(a));
  return 0;
}
int factorial(int x) {
  if (x == 0 || x == 1) {
    return 1;
  }
  else {
    return x * factorial(x - 1);
  }
}