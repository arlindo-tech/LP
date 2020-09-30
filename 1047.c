#include <stdio.h>

int main(void) 
{
   int X, Y, temp, mx, my, tempm;

   scanf("%d %d %d %d", &X, &mx, &Y, &my);
   //mx e my = minutos de X e Y
    if ((X == Y) && (mx == my))
     {
        temp=24;
        tempm=0;
     }
     
     if (Y>X)
     {
        temp = Y-X;
     }  

     if (Y<X)
     {
        temp=Y-X+24;
     }

     if (my>mx)
        tempm=my-mx;

      if (my<mx)
      {
        tempm=my-mx+60;
        temp=temp-1; 
      }

      if ((X == Y) && (mx > my))
     {
        temp=24-1;
        tempm= my - mx + 60;
      }


      if ((X == Y) && (mx < my))
     {
        temp=0;
        tempm= my - mx;
      }
     

      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", temp, tempm);

    

  return 0;
}