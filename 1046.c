#include <stdio.h>

int main(void) {
   int X, Y, Temp;

   scanf("%d %d", &X, &Y);
     if(X>Y)
     Temp=(X-Y-24)*(-1);

     if(X<Y)
     Temp=Y-X;

     if(X==Y)
     printf("O JOGO DUROU 24 HORA(S)\n");

     if(X!=Y)
     printf("O JOGO DUROU %d HORA(S)\n", Temp);

  return 0;
}