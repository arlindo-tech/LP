#include <iostream>
 
using namespace std;
 
int main( ) {
 
 float A , B, C;
 float P, X;
 scanf("%f", &A);
 scanf("%f", &B);
 scanf("%f", &C);
 if( A==0 || B== 0 || C== 0)
    return 0 ;
 if( A<C+B && B<C+A && C<A+B ){
   (P = A + C + B);
   printf("Perimetro = %.1f\n", P);
 }
  else{
   (X = (( A + B ) * C )/ 2 );
   printf("Area = %.1f\n", X);
  } 
 
    return 0;
}