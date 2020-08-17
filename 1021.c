#include <stdio.h>
 
int main() {
 
  float A;
  int C = 0;
  scanf("%f", &A);

  if(A>=0 && A<1000000.00){
  printf("NOTAS:\n");
  while(A>=100){A = A-100;
  C++;
  } printf("%d nota(s) de R$ 100.00\n", C);
  C = 0;
  while(A>=50){A = A - 50;
  C++;}
  printf("%d nota(s) de R$ 50.00\n", C);
  C = 0;
  while(A>=20){A = A - 20;
  C++;}
  printf("%d nota(s) de R$ 20.00\n", C);
  C = 0;
  while(A>=10) {A = A - 10;
  C++;}
  printf("%d nota(s) de R$ 10.00\n", C);
  C = 0;
  while(A>=5){A = A - 5;
  C++;}
  printf("%d nota(s) de R$ 5.00\n", C);
  C = 0;
  while(A>=2){A = A - 2;
  C++;}
  printf("%d nota(s) de R$ 2.00\n", C);
  C = 0;
  printf("MOEDAS:\n");
  while(A>=1){A = A - 1;
  C++;}
  printf("%d moeda(s) de R$ 1.00\n", C);
  C = 0;
  while(A>=0.50){A = A - 0.50;
  C++;}
  printf("%d moeda(s) de R$ 0.50\n", C);
  C = 0;
  while(A>=0.25){A = A - 0.25;
  C++;}
  printf("%d moeda(s) de R$ 0.25\n", C);
  C = 0;
  while(A>=0.10){A = A - 0.10;
  C++;}
  printf("%d moeda(s) de R$ 0.10\n", C);
  C = 0;
  while(A>=0.05){A = A - 0.05;
  C++;}
  printf("%d moeda(s) de R$ 0.05\n", C);
  C = 0;
  while(A>=0.001){A = A - 0.01;
  C++;}
  printf("%d moeda(s) de R$ 0.01\n", C);
  }
  
  return 0;
}