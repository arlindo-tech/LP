#include <stdio.h>


int main(void) {
  int N,c,X;
  
  scanf("%d", &N);

  for(c=0;c<N;c++)
   {
     scanf("%d", &X);
      if(X % 2 == 0 && X > 0)
       printf("EVEN POSITIVE\n");
      if(X % 2 != 0 && X < 0)
       printf("ODD NEGATIVE\n"); 
      if(X % 2 == 0 && X < 0)
       printf("EVEN NEGATIVE\n");
      if(X % 2 != 0 && X > 0)
       printf("ODD POSITIVE\n");  
       if(X == 0)
       printf("NULL\n");  


   }
 
  return 0;
}