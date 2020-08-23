#include <stdio.h>
#include<math.h>

int main(void) {
  double X, Y, Xd , Yd, A;

  scanf("%lf %lf\n""%lf %lf", &X, &Y, &Xd, &Yd);
  
  A = sqrt(((X-Xd)*(X-Xd))+((Y-Yd)*(Y-Yd)));


  printf("%.4lf\n", A);
  return 0;
}