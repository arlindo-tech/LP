#include <stdio.h>
#include <string.h>

int main(void) {
   
  int i,j, meio, erro;
  char X[51], Y[51];
  scanf("%s", X);

i=0;
j=0;

while (i<strlen(X)){
   if ((X[i]==97) || (X[i]==101) ||  (X[i]==105) || (X[i]==111) || (X[i]==117)) {
    //Números referentes a vogais em minúsculo de acordo com a ASCII

    Y[j] = X[i];
        j=j+1; 
    }
        i=1+i;
        Y[i] = '\0';
    }

j = (strlen(Y) - 1);
i=0;
erro = 0;
//Laço para comparar se há um palíndromo, comparando vogais da esquerda para direita com as vogais da direita para esquerda
while(i<strlen(Y))
{
    if(Y[i] != Y[j]) {
    //Se houver diferença(s), não há palíndromo, portanto, a risada não é "engra"
        erro = 1;
        break;
    }
  i = i + 1;
  j = j - 1;
}

if (erro == 1 )
{
printf("N\n");
}
else{printf("S\n");}

return 0;}
