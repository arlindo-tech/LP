#include <iostream>
 
using namespace std;
 
int main() {
 
  char A; 
  double B; 
  double C;
  scanf("%s", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);
  printf("TOTAL = R$ %.2lf\n", B+(C*0.15) );
    return 0;
}