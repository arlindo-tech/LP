#include <stdio.h>
#include <string.h>

int main(void) {
    int N, S, c, i, j, X;
    //N=Número de casos, S=Valor do deslocamento para direita, c=contador de casos, i e j= auxiliares que vão percorrer as strings
    char D[51];//String de entrada
    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//Alfabeto

    scanf("%d", &N);

    for (c = 0; c < N; c++)
    {
        scanf("%s", D);
        scanf("%d", &S);

        i = 0;
        while (i < strlen(D))
        {
            j = 0;

            X = D[i];
            while (X != A[j]) //A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            { 
                j++;
            }
           //Nesse caso, "A[]" servirá de apoio para achar um elemento da string e relacionar com o seu local no alfabeto, desse modo,no próximo passo, a letra irá ser alterada de acordo com o valor de S
            if (j - S >= 0) 
            {
                X = A[j - S];
                D[i] = X;
            }
            else 
            { 
                X = A[strlen(A) - (S - j)]; 
                D[i] = X;
            }


            i++;
        }
        printf("%s\n", D);
    }
    
    return 0;
}