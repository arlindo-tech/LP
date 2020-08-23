#include <stdio.h>
 
int main() {
 
  int A;
  int C = 0;
  //A=valor em reais & C=contador
  scanf("%d", &A);


  if(A>0 && A<1000000){
  printf("%d\n", A);
  while(A>=100){A = A-100;
  C++;
  } printf("%d nota(s) de R$ 100,00\n", C);
  C = 0;
  while(A>=50){A = A - 50;
  C++;}
  printf("%d nota(s) de R$ 50,00\n", C);
  C = 0;
  while(A>=20){A = A - 20;
  C++;}
  printf("%d nota(s) de R$ 20,00\n", C);
  C = 0;
  while(A>=10) {A = A - 10;
  C++;}
  printf("%d nota(s) de R$ 10,00\n", C);
  C = 0;
  while(A>=5){A = A - 5;
  C++;}
  printf("%d nota(s) de R$ 5,00\n", C);
  C = 0;
  while(A>=2){A = A - 2;
  C++;}
  printf("%d nota(s) de R$ 2,00\n", C);
  
   C = 0;
  while(A>=1){A = A - 1;
  C++;}
  printf("%d nota(s) de R$ 1,00\n", C);
  }

 
  return 0;
}