#include <stdio.h>


#include <math.h>
 
 
int main(void) {


 double A, B, C;
 double X, Z;
 scanf("%lf", &A);
 scanf("%lf", &B);
 scanf("%lf", &C);
 
 if((B*B)-(4*A*C) <0){
    printf("Impossivel calcular\n");
    return 0;
  }
 if(A==0) 
 printf("Impossivel calcular\n");
  else {
  X=(-B +(sqrt(B*B - 4*A*C)))/(2*A);
  printf("R1 = %.5lf\n",X);

  Z=(-B-(sqrt(B*B - 4*A*C)))/(2*A);
  printf("R2 = %.5lf\n",Z);
  }
  return 0;}