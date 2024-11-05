#include <stdio.h>
void mirror(int *px, int *py);

int main()
{
  int x = 0, y = 0;
  int *px = &x;
  int *py = &y;

  scanf("%d %d", px, py);
  mirror(px, py);
  printf("%d %d", *px, *py);

  return 0;
}

void mirror(int *px, int *py)
{
  *px *= -1;
}