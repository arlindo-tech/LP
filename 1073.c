#include <stdio.h>
#include <math.h>

int main(void) {
  int N;
  int c, b, Y;
  
  scanf("%d", &N);
  
  for(c=2;c<=N;c+=2)
  {
    Y=(int)pow(c, 2);
    printf("%d^2 = %d\n", c, Y);
  }

  return 0;
}