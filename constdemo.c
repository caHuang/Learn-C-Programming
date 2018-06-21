#include <stdio.h>

int main(void) {
  const int x = 100;

  // error: cannot assign to variable 'x' with const-qualified type 'const int'
  // x = 200;

  printf("常數 x = %d \n", x);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}
