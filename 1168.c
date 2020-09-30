#include <stdio.h>

int main(void) {
  int N, c, Resposta;//N=Número de casos e C contador
  int Gabarito[]={6,2,5,5,4,5,6,3,7,6};
  char C;//Usando caracteres no lugar de números para simplificar a lógica
  scanf("%d\n", &N);
  

   for(c=0;c<N;c++){
     C=0;
     Resposta=0; 
      while(C!='\n'){//O '\n' foi usado para reconhecer o fim dos números como algarismos
        scanf("%c", &C);
        //Associaremos o caracter do número com o seu valor da tabela ASCII, 
         if(C!='\n')
          Resposta+=Gabarito[(int)C-48];
      }

       
     printf("%d leds\n",Resposta); 

    
    }

  return 0;
}