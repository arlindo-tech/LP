#include <stdio.h>

int main(void) {
  int X, Odd, c;
  
  scanf("%d", &X);

    if (X % 2 == 0)
    {  
      Odd=X + 1;
      printf("%d\n", Odd); 
       for(c=0;c<5;c++)
       {
         Odd= Odd + 2;
       printf("%d\n", Odd);  
       } 
    }

    if (X % 2 != 0)
    {   
       Odd=X;
       printf("%d\n", Odd);
         for(c=0;c<5;c++)
        {   
           Odd+=2;
           printf("%d\n", Odd);
        } 
        
    }

  return 0;
}