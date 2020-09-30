#include <stdio.h>
#define MAX 70

int main(void) 
{
    int N, Matriz[MAX][MAX], i, j, aux;
    //N=tamanho da matriz, i = linha, j = coluna, aux = auxiliar na montagem da matriz

      while (!feof(stdin))
      {
        scanf("%d", &N);
          for (i = 0; i < N; i++)
          {
             for (j = 0; j < N; j++)
             {
                Matriz[i][j] = 3;//preencher toda a matriz com 3
             }
          } 
          if (N % 2 == 0)
          {
             aux = N / 2;          // Pares
          }
          else
          {
            aux = (N + 1) / 2;    //Impares
          }
          // Preenche as Diagonais (o Centro também)
          for (i = 0; i < aux; i++)
          {
             Matriz[i][i] =  1;
             Matriz[N - i - 1][N - i - 1] = 1;
             //diagonal principal será composta por 1 

             Matriz[i][N - i - 1] = 2;
             Matriz[N - i - 1][i] =  2;
             //diagonal secundária será composta por 2
          }
           // Print -------------------------
            if (!feof(stdin))
            {
              for (i = 0; i < N; i++)
              {
                 for (j = 0; j < N; j++)
                 {   
                   printf("%d", Matriz[i][j]);
                  }
                   printf("\n");
              }
            }       
      }      
    return 0;
}