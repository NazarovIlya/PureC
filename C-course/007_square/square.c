#include <stdio.h>

int main(void)
{
  double first_side, second_side, square;

  scanf("%lf %lf", &first_side, &second_side);

  square = first_side * second_side;

  printf("%.1lf", square);

  return 0;
}