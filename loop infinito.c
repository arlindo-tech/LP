#include <stdio.h>

int main(void) {
  int X;
  scanf("%d", &X);
  if(X==0)
   X=1;



   if(X<0){
   while (X!=0){
    X=X-1;
    printf("%d",X);
  
  }
   }


  if(X>0){
  while (X!=0){
    X=X+1;
    printf("%d",X);
  
  }
  }
  return 0;
}