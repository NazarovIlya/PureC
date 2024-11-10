#include <stdio.h>
int nod(int a, int b);

int main(void)
{
  int first = 0, second = 0;
  scanf("%d %d");
  int res = nod(first, second);
  prints("%d", res);
  return 0;
}

int nod(int a, int b)
{
  int res = 0;
  if (b == 0)
    res = a;
  else
    res = nod(b, a % b);
  return res;
}