#include <stdio.h>
#include<math.h>

int main(void) {
  float X, Y, Z;
  float F;
  scanf("%f%f", &X, &Y);

  Z=12;
  F = ((Y*X)/Z); 

  

  printf("%.3f\n", F);
  

  return 0;
}