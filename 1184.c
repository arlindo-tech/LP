#include <stdio.h>
#define MAX 12

int main(void) 
{
    int  c, i, j, aux;
    float Matriz[MAX][MAX], N, SOMA;
    char O;

    SOMA=0;
     scanf("%c", &O);
        for (i = 0; i < MAX; i++)
        {
          for (j = 0; j < MAX; j++)
          {   
             scanf("%f", &N);
             Matriz[i][j] = N; //preenchimento de acordo com o valor de entrada colocado
          }
        }
    
          
        for (i =0; i< MAX; i++)
        {
          for (j=0; j<i; j++)
          {
           SOMA+=Matriz[i][j]; //Os valores vão se somando  desde que a coluna seja menor que a linha
          }
         }
 
        if(O=='S')
          printf("%.1f\n", SOMA);
        else printf("%.1f\n", (SOMA/(MAX*MAX/2-(MAX/2)))); //média 

    return 0;
}