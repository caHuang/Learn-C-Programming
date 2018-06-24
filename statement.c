#include <stdio.h>

int main(void) {
  double c = 100;
  double f = c * (9.0 / 5.0) + 32;

  printf("攝氏 100 度 = 華氏 %.2f 度 \n", f);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}
