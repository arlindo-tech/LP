#include <stdio.h>


int main(void) {
  int X;
  float Y, M;
  scanf("%d", &X);
  scanf("%f", &Y);
  M = X/Y;
   printf("%.3f km/l\n", M);

  return 0;
}