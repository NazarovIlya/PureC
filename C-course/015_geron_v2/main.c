#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);
float p_culc(float a, float b, float c);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main(void)
{
  int x1, x2, y1, y2, x3, y3;

  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

  float result = area(x1, y1, x2, y2, x3, y3);

  printf("%.3f", result);

  return 0;
}

float dist(int x1, int y1, int x2, int y2)
{
  return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

float p_culc(float a, float b, float c)
{
  return (a + b + c) / 2;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
  float a, b, c, p, res;
  // float res;

  a = fabs(dist(x2, y2, x3, y3));
  b = fabs(dist(x3, y3, x1, y1));
  c = fabs(dist(x1, y1, x2, y2));
  p = p_culc(a, b, c);
  //    printf("a - %f, b - %f, c - %f\np - %f\n", a, b, c, p);
  res = sqrt(p * (p - a) * (p - b) * (p - c));
  //    printf("area - %f\n", res);
  return res;
}
