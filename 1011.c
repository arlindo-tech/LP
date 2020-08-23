#include <stdio.h>

int main(void) {
  double R, X ;
  scanf("%lf", &R);
  X = (4 *(3.14159)*(R * R * R) )/3;
  printf("VOLUME = %.3lf\n", X);
  return 0;
}