#include <stdio.h>
void rotateC(int *x1, int *y1, int *x2, int *y2);
void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main(void)
{
  int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
  int *px1 = &x1, *py1 = &y1, *px2 = &x2, *py2 = &y2;

  scanf("%d %d %d %d", px1, py1, px2, py2);
  rotateC(px1, py1, px2, py2);
  printf("%d %d %d %d", *px1, *py1, *px2, *py2);

  return 0;
}

void rotateC(int *x1, int *y1, int *x2, int *y2)
{
  int cx = 0, cy = 0;
  int *pcx = &cx, *pcy = &cy;
  center(*x1, *y1, *x2, *y2, pcx, pcy);
  int dx = *x1 - cx;
  int dy = *y1 - cy;
  *x1 = cx - dy;
  *y1 = cy - dx;
  *x2 = cx + dy;
  *y2 = cy + dx;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc)
{
  *pxc = (xlt + xrb) / 2;
  *pyc = (ylt + yrb) / 2;
}
