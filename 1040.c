#include <stdio.h>

int main(void) {
  float N1 , N2, N3 , N4, MP, NE, MF;
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
 //N1, N2, N3 e N4= Notas, MP=Média parcial, NE=Nota do Exame & MF=Média final. 
 MP=(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10);

printf("Media: %.1f\n", MP);
 if (MP>=7)
  printf("Aluno aprovado.\n");
 
 if (MP<5)
 printf("Aluno reprovado.\n");

  if (MP>=5.0 && MP<7){
  printf("Aluno em exame.\n");
  scanf("%f", &NE);
  printf("Nota do exame: %.1f\n", NE);
  MF=(MP+NE)/2;

  if (MF>=5.0){
  printf("Aluno aprovado.\n");
  printf("Media final: %.1f\n", MF);}

  if (MF<5.0){
  printf("Aluno reprovado.\n");
  printf("Media final: %.1f\n", MF);}
  }
  return 0;
}