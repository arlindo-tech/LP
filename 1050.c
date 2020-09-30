#include <stdio.h>

int main(void) {
  int X;
  scanf("%d", &X);
  if (X == 11)
  printf("Sao Paulo\n");
   if (X == 21)
  printf("Rio de Janeiro\n");
   if (X == 19)
  printf("Campinas\n");
   if (X == 71)
  printf("Salvador\n");
   if (X == 61)
  printf("Brasilia\n");
   if (X == 31)
  printf("Belo Horizonte\n");
   if (X == 27)
  printf("Vitoria\n");
   if (X == 32)
  printf("Juiz de Fora\n");
   if (X!= 11 && X!= 21 && X!= 19 && X!= 71 && X!= 61 && X!= 31 && X!= 27 && X!=32)
   {printf("DDD nao cadastrado\n");}
  return 0;
}