#include <stdio.h>
#include <math.h>

int main(void){
int X, Y, S,c;//X e Y = Números de entrada, S = Soma dos números de entrada, c = contador 
char R[10];

 do 
 {
   scanf("%d %d", &X, &Y);

     if(X == 0 && Y == 0)
     return 0;
  
   S = Y + X;

     for(c=(int)log10(S);c>=0;c--)//descobriremos quantas casas númericas a soma tem 
     {//Sabendo quantas casas, podemos dividir o número divesrsas vezes de forma que isolomos cada casa (unidade, centena, dezena...), dessa forma, podemos isolar os zeros
       if((int)((S/pow(10,c)))%10 != 0)
       printf("%d", (int)((S/pow(10,c)))%10);
     }
    printf("\n"); 
  } 
 while (1);
 //ficará no loop até a entrada  (0,0) 
  
  return 0;
}