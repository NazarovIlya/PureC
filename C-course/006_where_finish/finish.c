#include <stdio.h>

int main(void)
{
  int round = 0, total = 0;
  int count = 0, finish = 0;

  scanf("%d %d", &round, &total);

  count = total / round;
  finish = total - (count * round);

  printf("%d %d", count, finish);

  return 0;
}