#include <stdio.h>

int main(void) {
  char c1 = 65;
  char c2 = 90;
  char c3 = 97;
  char c4 = 122;

  char c5 = 'A';
  char c6 = 'Z';
  char c7 = 'a';
  char c8 = 'z';

  char c9 = '9';
  char c10 = 9;

  printf("char 變數 c1 = %c \n", c1);
  printf("char 變數 c2 = %c \n", c2);
  printf("char 變數 c3 = %c \n", c3);
  printf("char 變數 c4 = %c \n", c4);

  printf("A 的字元編碼 = %d \n", c5);
  printf("Z 的字元編碼 = %d \n", c6);
  printf("a 的字元編碼 = %d \n", c7);
  printf("z 的字元編碼 = %d \n", c8);

  printf("char 變數 c9 = %c \n", c9);
  printf("char 變數 c10 = %c \n", c10);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}
