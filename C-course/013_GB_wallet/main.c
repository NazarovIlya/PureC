#include <stdio.h>

int main(void)
{
  int g1, s1, k1, g2, s2, k2, g, s, k, temp;

  scanf("%d %d %d\n%d %d %d", &g1, &s1, &k1, &g2, &s2, &k2);

  g = g1 + g2;
  s = s1 + s2;
  k = k1 + k2;

  s += k / 29;
  k = k - (k / 29) * 29;
  g += s / 17;
  s = s - (s / 17) * 17;

  printf("%d %d %d", g, s, k);

  return 0;
}