#include <stdio.h>

int main(void) {
  int a = 100;
  int b = 200;
  char c = a > b ? 'T' : 'F';
  printf("a > b : %c \n", c);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}

