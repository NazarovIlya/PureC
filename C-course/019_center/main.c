#include <stdio.h>
void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main(void)
{
  int xlt = 0, ylt = 0, xrb = 0, yrb = 0, xc = 0, yc = 0;
  int *pxc = &xc, *pyc = &yc;

  scanf("%d %d %d %d", &xlt, &ylt, &xrb, &yrb, pxc, pyc);
  center(xlt, ylt, xrb, yrb, pxc, pyc);
  printf("%d %d", *pxc, *pyc);
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc)
{
  *pxc = (xlt + xrb) / 2;
  *pyc = (ylt + yrb) / 2;
}