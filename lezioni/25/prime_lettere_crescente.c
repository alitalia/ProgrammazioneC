#include <stdio.h>

void stampa(int n);

int main(void) {
  int n;

  printf("n: ");
  scanf("%d", &n);

  stampa(n);

  printf("\n");

  return 0;
}

void stampa(int n) {
  if (n == 0)
    return;
  else {
    stampa(n - 1);
    putchar('a' + n - 1);
  }
}
