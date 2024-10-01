#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a = -5;
  int b = abs(a);
  int c = time();
  printf("Random number is: %d\n", c);
  printf("%d\n", b);
  return 0;
}
