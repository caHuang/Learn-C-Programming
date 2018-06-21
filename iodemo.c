#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // warning: this program uses gets(), which is unsafe.
  // char s[12];
  // printf("請輸入名稱:");
  // gets(s);
  //
  // 使用 fgets() 替換 gets()
  //
  char s[12];
  printf("請輸入名稱:");
  fgets(s, (sizeof s / sizeof s[0]), stdin);

  printf("Hello, %s \n", s);

  printf("Press any key to continue...\n");
  getchar();

  return 0;
}
