#include <stdio.h>
#define MAX 100

int main(void) 
{
    int N, Matriz[MAX][MAX], c, i, j, aux;
    //
     do 
     {
        scanf("%d", &N);
        if (N == 0) return 0;

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                Matriz[i][j] = 0;
            }
        }
        if (N % 2 == 0)
        {
            aux = N / 2;            // Pares
        }
        else
        {
            aux = (N + 1) / 2;    //Impares
        }
        // Preenche as Diagonais (o Centro também)
        for (i = 0; i < aux; i++)
        {
            Matriz[i][i] = i + 1;
            Matriz[N - i - 1][N - i - 1] = i + 1;

            Matriz[i][N - i - 1] = i + 1;
            Matriz[N - i - 1][i] = i + 1;
        }

        //Fazer um for, pelas diagonais, avançando até um elemento de mesmo valor
   
       for (c = 0; c<N; c++)
       {  
          i=c;        
          while (i<N-c)
          { 
            
            Matriz[c][i]=Matriz[c][c];

            Matriz[N-1-(c)][i]=Matriz[c][c];

            Matriz[i][c]=Matriz[c][c];

            Matriz[i][N-1-(c)]=Matriz[c][c];  
            i++;
          }
        }


        // Print -------------------------
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {            
                 if(j==0) printf("%3d", Matriz[i][j]); 
                 else printf("%4d", Matriz[i][j]);
            }
            printf("\n");
        }
            printf("\n");
      }while (N != 0);
    return 0;
}