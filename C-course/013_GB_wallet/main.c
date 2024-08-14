#include <stdio.h>
#define SICKLES 17
#define KNUTS 29

int main(void)
{
  int g1, s1, k1, g2, s2, k2, g, s, k, temp;

  scanf("%d %d %d\n%d %d %d", &g1, &s1, &k1, &g2, &s2, &k2);

  g = g1 + g2;
  s = s1 + s2;
  k = k1 + k2;

  s += k / KNUTS;
  k = k - (k / KNUTS) * KNUTS;
  g += s / SICKLES;
  s = s - (s / SICKLES) * SICKLES;

  printf("%d %d %d\n", g, s, k);

  return 0;
}