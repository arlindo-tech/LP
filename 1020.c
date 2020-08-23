#include <stdio.h>

int main(void) {
int C, X;
scanf("%d", &X);
//X=valor de entrada e C=contador

C=0;

while (X>=365){
X=X-365;
C++;}
printf("%d ano(s)\n",C);

//X para mês
C=0;

while (X>=30){
X=X-30;
C++;}
printf("%d mes(es)\n", C);

//aproveitando o resto de X temos os dias!!
if(X<30)
printf("%d dia(s)\n", X);


  return 0;
}