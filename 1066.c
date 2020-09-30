#include <stdio.h>

int main(void) {
  int X1, X2, X3, X4, X5, c;

  scanf("%d %d %d %d %d", &X1, &X2, &X3, &X4, &X5);

  c=0;
  if (X1 % 2 == 0)
     c++;
  if (X2 % 2 == 0)
     c++;
  if (X3 % 2 == 0)
     c++;   
  if (X4 % 2 == 0)
     c++;
  if (X5 % 2 == 0)
     c++;
  printf("%d valor(es) par(es)\n", c);

  c=0;
  if (X1 % 2 != 0)
     c++;
  if (X2 % 2 != 0)
     c++;
  if (X3 % 2 != 0)
     c++;   
  if (X4 % 2 != 0)
     c++;
  if (X5 % 2 != 0)
     c++;
  printf("%d valor(es) impar(es)\n", c);

  c=0;
  if (X1 > 0)
     c++;
  if (X2 > 0)
     c++;
  if (X3 > 0)
     c++;   
  if (X4 > 0)
     c++;
  if (X5 > 0)
     c++;
  printf("%d valor(es) positivo(s)\n", c);
  
  c=0;
  if (X1 < 0)
     c++;
  if (X2 < 0)
     c++;
  if (X3 < 0)
     c++;   
  if (X4 < 0)
     c++;
  if (X5 < 0)
     c++;
  printf("%d valor(es) negativo(s)\n", c);

  return 0;
}