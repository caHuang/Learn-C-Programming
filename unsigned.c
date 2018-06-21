#include <stdio.h>

int main(void) {
  // warning: implicit conversion from 'int' to 'short'
  // changes value from 32768 to -32768 [-Wconstant-conversion]
  short a = 32768;

  unsigned short b = 32768;

  // warning: implicit conversion from 'int' to 'short'
  // changes value from 65535 to -1 [-Wconstant-conversion]
  short x = 65535;

  unsigned short y = 65535;

  printf("a: %d \n", a);
  printf("b: %d \n", b);
  printf("x: %d \n", x);
  printf("y: %d \n", y);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}
