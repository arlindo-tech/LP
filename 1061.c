#include <stdio.h>

int main(void) {
    
    int A, B, C, D, AUX;

    int W, X, Y, Z;
    
    scanf("Dia %d", &A);
    scanf("%d : %d : %d\n", &B, &C, &D);
    int E, F, G, H;
    scanf("Dia %d", &E);
    scanf("%d : %d : %d", &F, &G, &H);
    W = (E-A);
    Z=D-H;
    Y=C-G;
    X=B-F;

    if (W==0 && X==0 && Y>0 && (Z==0 || Z!= 0))
    return 0;
    

    if(W!=0 && Z==0 && Y==0 && X==0)
       W=E-A;
      
     
     if(W!=0 && (X>0 || (X==0 && Y>0) || (X==0 && Y==0 && Z>0)) )
     W = W - 1;
    
      if (B>F)  
      X = (F - B + 24);
      else {X= F-B;}

      if (C>G) 
      {Y = (G-C+60);
       X=X-1;}
      if (G>C)
      Y = (G-C);

      if (D>H){ 
      Z=(H-D+60);
      Y=(Y-1);}
      if (H>D)
      Z=(H-D);
      
   
  
    printf("%d dia(s)\n", W );
    printf("%d hora(s)\n", X );
    printf("%d minuto(s)\n", Y );
    printf("%d segundo(s)\n", Z );



  return 0;
}
