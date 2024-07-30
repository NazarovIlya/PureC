#include <stdio.h>

int main(void)
{
  int n = 0, day = 0, res = 0;

  scanf("%d %d", &n, &day);

  res = (n - day) / 7 + 1;

  printf("%d", res);
}