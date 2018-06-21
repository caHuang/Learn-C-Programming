#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int h, w, d;

  printf("高度h: ");
  scanf("%d", &h);

  printf("寬度w: ");
  scanf("%d", &w);

  printf("長度d: ");
  scanf("%d", &d);

  int surface_area;    // 表面積變數
  int value1 = d * w;  // 長×寬
  int value2 = w * h;  // 寬×高
  int value3 = d * h;  // 長×高

  // 長方體表面積 =（長×寬+長×高+寬×高）×2
  surface_area = (value1 + value2 + value3) * 2;

  // 長方體體積 = 長×寬×高
  int cuboid_volume = h * w * d;

  printf("長方體的表面積: %d\n", surface_area);
  printf("長方體的體積: %d\n", cuboid_volume);

  return 0;
}
