#include <stdio.h>
#include <string.h>

int main(void) {
  char A[100], B[100],C[100], D[100];
  scanf("%s", A);
  scanf("%s", B);
  scanf("%s", C);

  if (strcmp(A,"vertebrado") == 0 && strcmp(B, "ave") ==0 && strcmp(C, "carnivoro") == 0 ) {
      printf("aguia\n");
      return 0;
  }

  if (strcmp(A,"vertebrado") == 0 && strcmp(B, "ave") ==0 && strcmp(C, "onivoro") == 0 ){
      printf("pomba\n");
      return 0;
  }

  if (strcmp(A,"vertebrado") == 0 && strcmp(B, "mamifero") ==0 && strcmp(C, "onivoro") == 0 ){
      printf("homem\n");
      return 0;
  }

  if (strcmp(A,"vertebrado") == 0 && strcmp(B, "mamifero") ==0 && strcmp(C, "herbivoro") == 0 ){
      printf("vaca\n");
      return 0;
  }

  if (strcmp(A,"invertebrado") == 0 && strcmp(B, "inseto") ==0 && strcmp(C, "hematofago") == 0 ){
      printf("pulga\n");
      return 0;
  }

  if (strcmp(A,"invertebrado") == 0 && strcmp(B, "inseto") ==0 && strcmp(C, "herbivoro") == 0 ){
      printf("lagarta\n");
      return 0;
  }

  if (strcmp(A,"invertebrado") == 0 && strcmp(B, "anelideo") ==0 && strcmp(C, "hematofago") == 0 ){
      printf("sanguessuga\n");
      return 0;
  }

  if (strcmp(A,"invertebrado") == 0 && strcmp(B, "anelideo") ==0 && strcmp(C, "onivoro") == 0 ){
      printf("minhoca\n");
      return 0;
  }

  return 0;
}