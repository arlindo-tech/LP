#include <stdio.h>

int main(void) {
  int X, c;
  
  scanf("%d", &X);

  for(c=1;c<=X;c+=2)
  {
    printf("%d\n", c);
  }

  return 0;
}