#include <stdio.h>


int main(void) {
  int A, B, C ;
  int MaiorAB, X, Y, Z;
  scanf("%d %d %d", &A, &B, &C);
  X = A-B;
  if (X<0)
  X=X*(-1);
  MaiorAB =( A + B + X)/2;
  Z = (MaiorAB - C);
  if (Z<0)
  Z=Z*(-1);
  Y= (MaiorAB + C + Z)/2;
  
   printf("%d eh o maior\n", Y);

  return 0;
}