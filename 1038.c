#include <stdio.h>

int main(void) {
  int X, Y;
  float N1, N2, TOTAL;
  scanf("%d %d", &X, &Y);
   
    if(X==1)
     N1 = 4.00;
    
    if(X==2)
     N1 = 4.50;

    if(X==3)
     N1 = 5.00;

    if(X==4)
     N1 = 2.00;

    if(X==5)
     N1 = 1.50;

    

    TOTAL = Y*N1;

    printf("Total: R$ %.2f\n", TOTAL);


  return 0;
}