#include <stdio.h>

int main(void) {
int X, C, H, S, T;
scanf("%d", &T);
//T=tempo colocado,C=contador dos minutos, H=variável para calcular horas, S=Contador das horas e X=variável dos segundos
C=0;
X=T;
 while (X-60>=60){
 X=X-60;
 C++;}


 H=C+1;
 
 S=0;
 while(H>60){
 H=H-60;
 S++;} 
 if(S>0)
 printf("%d:", S);
 if(S==0)
 printf("%d:", 0);


 while (C>60){
 C=(C-60);}
 if (C==0)
 printf("%d:", C);
 if(C!=0)
 printf("%d:", C+1);

if(X>60)
printf("%d\n", X-60);
if (X<60)
printf("%d\n", X);

  return 0;
}