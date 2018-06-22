#include <stdio.h>

int main(void) {
  float f = 123.456e3;
  double d = 456.789E4;
  printf("float 變數 f = %f \n", f);
  printf("double 變數 d = %f \n", d);
  printf("float 變數 f = %e \n", f);
  printf("double  變數 d = %e \n", d);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}
