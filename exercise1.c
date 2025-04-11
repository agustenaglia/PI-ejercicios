#include <stdio.h>

int main() {
  int number1;
  int number2;
  printf("ingrese el numero 1: ");
  scanf("%d", &number1);
  printf("ingrese el numero 2: ");
  scanf("%d", &number2);
  int sum = number1 + number2;
  printf("el resultado es %d", sum);
  return 0;
}