#include <stdio.h>

int main(void)
{
  int n, res;
  float k;

  scanf("%d %f", &n, &k);

  res = n - (n * k);

  printf("%d", res);

  return 0;
}