#include <stdio.h>

int main(void)
{
  int bell, nBell, res;

  scanf("%d %d", &bell, &nBell);

  res = (nBell - bell + 1) * (bell + nBell) / 2;

  printf("%d", res);

  return 0;
}