#include <stdio.h>
#include <string.h>

int main(void) {
  int c, L, N, i, k,tamx,tamy;
  //N=Quantidade de string, L = maior string, c = contador de string, i e k = auxiliares  que percorrerão as strings para fazer alterações no caracteres 
  char X[50], Y[50], Resposta[100];

   scanf("%d", &N);

    for (c=0; c<N ; c++) 
    {

     scanf("%s %s", X, Y);
   
     tamx=strlen(X); 
     tamy=strlen(Y);
      //selecionar a maior string
       if (tamx<tamy)
       L=tamx;
       else L=tamy;

     i=0;
     k=0;

       while(i<L)
       {
         Resposta[k]=X[i];
         Resposta[k+1]=Y[i];

         i++;
         k=k+2;
        }

         if (tamx<tamy)
         {
           while(i<tamy)
            {
             Resposta[k]=Y[i];
             i++;
             k++;
            }
          } 
          else
          {
            while(i<tamx)
            {
             Resposta[k]=X[i];
             i++;
             k++;
            }
          }
     Resposta[k]='\0';
     printf("%s\n", Resposta);
    }
  return 0;
}