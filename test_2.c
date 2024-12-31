#include <stdio.h>
struct s {
  int i;
  char c;
} s;

int main(void) {
  int x = sizeof(*(&s));
  printf("%d\n", x);
}
