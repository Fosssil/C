#include <stdio.h> // For printf and scanf

int main() {
  int digit;
  printf("Please Enter a digit: ");
  scanf("%d", &digit);
  if (digit == 5)
    return 0;
  else
    printf("Ohho! error");
  return 2;
}
