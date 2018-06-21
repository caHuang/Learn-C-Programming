#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 100, y, z;
  y = 200;
  z = 300;

  x = 123;
  y = 456;
  z = 789;

  printf("x = %d, y = %d, z = %d \n", x, y, z);

  printf("Press any key to continue...\n");
  getchar();

  return 0;
}
