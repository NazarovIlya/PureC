#include <stdio.h>

int main(void)
{
  int res = 0;
  float h = 0.0, s = 0.0, w = 0.0, ch = 0.0;

  scanf("%f %f %f", &s, &h, &ch);

  w = s / h;
  res = w / ch;

  printf("%d", res);

  return 0;
}