#include <stdio.h>
#include <math.h>
#define MAX  9
int main(void) {
  int n, matriz[MAX][MAX], c, c1, i, j, SOMALINHA, SOMACOLUNA, SOMACAMPO,aux,AUX;
   //n=número de testes, c e ci = contadores, i e j = auxiliares para verificar a matriz, aux=auxiliar na comparação linha por linha e AUX=auxiliar para que o programa pare de comparar caso tenha uma confirmação de erro.

  //Uma possível solução será encontrada se a soma dos elementos ao quadrado na linha, na coluna e no campo 3x3 forem igual a 285

  scanf("%d", &n);

  for (c=1;c<=n;c++) 
  { 
    AUX = 0;
     for (i=0;i<MAX;i++)
     {
      SOMALINHA=0;
       for (j=0;j<MAX;j++)
       {
         scanf("%d", &matriz[i][j]);
         SOMALINHA=SOMALINHA +(pow(matriz[i][j],2));
       }

       if (SOMALINHA!=285)
       { 
          if (AUX == 0)
          {   
            printf("Instancia %d\n", c);
            printf("NAO\n\n");
            AUX = 1;
          }  
       }
     }

     if (AUX == 0)
     {
      for (j=0;j<MAX;j++)
      {  
        SOMACOLUNA=0;
          for (i=0;i<MAX;i++)
          {
          SOMACOLUNA=SOMACOLUNA+(pow(matriz[i][j],2));
          }
            if (SOMACOLUNA!=285)// CORRIGIR!
             { 
               if (AUX == 0)
               {   
                 printf("Instancia %d\n", c);
                 printf("NAO\n\n");
                 AUX = 1;
                }  
             }
      }  
     }   

      if (AUX == 0)
     {
        i=0;
        aux=3;
         for (c1=0;c1<3;c1++)
         { 
           SOMACAMPO=0;
            while (i<aux)
            { 
              j=0;
              while (j<3)
               {
                 SOMACAMPO=SOMACAMPO+(pow(matriz[i][j],2));
                  j++;
               }
   
              i++;  
            } 

           aux+=3;
            if (SOMACAMPO!=285)
             {
               if (AUX == 0)
                 {   
                   printf("Instancia %d\n", c);
                   printf("NAO\n\n");
                   AUX = 1;
                 }  
             }
          }  
     }    
      
      if (AUX == 0)
     {
        aux=3;
        i=0;
          for (c1=0;c1<3;c1++)
          { 
           SOMACAMPO=0;
            while (i<aux)
            { 
              j=3;
              while (j<6)
               {
                 SOMACAMPO=SOMACAMPO+(pow(matriz[i][j],2));
                 j++;
               } 

              i++;  
            } 
           aux+=3;
            if (SOMACAMPO!=285)
             {
               if (AUX == 0)
                 {   
                   printf("Instancia %d\n", c);
                   printf("NAO\n\n");
                   AUX = 1;
                 }  
             }
          } 
     }  
      
      if (AUX == 0)
     {
        aux=3;
        i=0;
          for (c1=0;c1<3;c1++)
          { 
            SOMACAMPO=0;
             while (i<aux)
             { 
               j=6;
               while (j<9)
                {
                  SOMACAMPO=SOMACAMPO+(pow(matriz[i][j],2));
                  j++;
                }
               i++;  
             } 
            aux+=3;
             if (SOMACAMPO!=285)
             {
               if(AUX == 0)
                {   
                 printf("Instancia %d\n", c);
                 printf("NAO\n\n");
                 AUX = 1;
                }  
             }
          }
     }   

    if (AUX == 0)
    { 
      printf("Instancia %d\n", c);
      printf("SIM\n\n");
    }  
     
  }



  return 0;
}
