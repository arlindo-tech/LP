#include <stdio.h>

int main(void) {

  float X, A,C,AUX,AUXI;
  scanf("%f", &X);

  if(X>0 && X<=2000)
  printf("Isento\n");

  if(X>=2000.01 && X<=3000.00){
  AUX= X-2000.00;
  X=AUX;
  A = (X*0.08);
  printf("R$ %.2f\n", A);}

 if(X>=3000.01 && X<=4500.00){
  AUX= X-2000.00;
  AUXI= AUX-1000.00;

  X=((AUX-AUXI)*0.08)+(AUXI*0.18);
  
  printf("R$ %.2f\n", X);}


  if(X>4500.00){
   AUX= X-2000.00;
  AUXI= AUX-1000.00;
  C=AUXI-1500.00;
  X=((AUX-AUXI)*0.08)+((AUXI-C)*0.18)+(C*0.28);
  printf("R$ %.2f\n", X);}

  return 0;
}