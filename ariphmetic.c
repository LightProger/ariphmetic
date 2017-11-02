#include <stdio.h>

/* Деление числа на разряды */

int main() {
  int a = 0, b = 0, c = 0, d = 0, res = 0;// put your code here
  scanf(" %d", &a);
  b = a /100;
  c = a % 100;
  c = c / 10;
  d = a % 10;
  res = b + c + d;
  printf("%d", res);
  return 0;
}