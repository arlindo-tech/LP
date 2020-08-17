#include <stdio.h>

int main(void) {

  double A, B, C;
  double X, Y, Z, AUX;
  scanf("%lf" " %lf" "%lf", &A, &B, &C);
  if (A==0 || B==0 || C==0){
    printf("NAO FORMA TRIANGULO\n");
  return 0;
  }
  if (A<B && B<C){
    AUX = A;
    A = C;
    C = AUX;
  }
  else if (B<A && A<C){
    AUX = A;
    A = C;
    C = B;
    B = AUX;
  }
  else if (B<C && C<A){
    AUX = B;
    B = C;
    C = AUX;
  }
  else if(A<C && C<B){
    AUX = A;
    A = B;
    B = C;
    C = AUX;
  }
  else if(A<B && C<B && C<A){
    AUX = A;
    A = B;
    B = AUX;
  }
  else if(A<B && C<B && A<C){
    AUX = A;
    A = B;
    B = C;
    C = AUX;
  }
  else if (B==A && A<C){
    AUX = A;
    A = C;
    C = AUX;
  }
  else if (C==A && A<B){
    AUX = A;
    A = B;
    B = AUX;
  }
   (X = A*A);
   (Y = B*B);
   (Z = C*C);

  if (A >= B+C)
  {
  printf("NAO FORMA TRIANGULO\n");
  return 0;
  }
    if (X == (Y + Z))
  printf("TRIANGULO RETANGULO\n");

  if (X > (Y + Z))
  printf("TRIANGULO OBTUSANGULO\n");

  if (X < (Y+Z))
  printf("TRIANGULO ACUTANGULO\n");

  if (A==B && B==C && A==C)
  printf("TRIANGULO EQUILATERO\n");

  if ((B==A && B!=C)||(C==A && C!=B)||(C==B && C!=A))
  printf("TRIANGULO ISOSCELES\n");



  return 0;
}