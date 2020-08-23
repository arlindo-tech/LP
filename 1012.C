#include <stdio.h>

int main(void) {
  double A, B, C ;
  double Q, R, T, CI, TRA;
  scanf("%lf %lf %lf", &A, &B, &C);
  T = ((A*C)/2);
  CI = (C*(3.14159)*C);
  TRA = (((A+B)*C)/2);
  Q = (B*B);
  R = (A*B);

  printf("TRIANGULO: %.3lf\n", T);
  printf("CIRCULO: %.3lf\n", CI);
  printf("TRAPEZIO: %.3lf\n", TRA);
  printf("QUADRADO: %.3lf\n", Q);
  printf("RETANGULO: %.3lf\n", R);

  return 0;
}