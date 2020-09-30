#include <stdio.h>
#include <string.h>
#define MAX 51

int main(void) {
  int N, M, P, C, c, i, Quantidade;//N=Número de ida ao mercado, M=quantidade de vegetais e seus preços, P=quantidade de vegetais != comprados, c, C e i = contadores. 
  float Valor[MAX], SOMA;
  char Lvegetal[MAX][MAX],X[MAX];//X variável que vai ser comparada com a lista "Lvegetal[MAX][MAX]".

  scanf("%d", &N);

  for (c=0;c<N;c++)
  { 
    SOMA=0;
    scanf("%d", &M);
      for(C=0;C<M;C++)
     {
       scanf("%s %f", Lvegetal[C], &Valor[C]);
     }
    scanf("%d", &P);
      for(C=0;C<P;C++) 
     { 
       scanf("%s %d", X, &Quantidade);
         for (i=0;i<M;i++)
         {
           if (strcmp(X, Lvegetal[i])==0)
            {
              SOMA+=(Valor[i]*Quantidade);
              break;
            }
         }
     }
     printf("R$ %.2f\n", SOMA);  
  }

  return 0;
}