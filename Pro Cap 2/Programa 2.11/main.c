#include <stdio.h>
#include <math.h>

/* Billete de ferrocarril.
DIS y TIE; variables de tipo entero.
BIL: variable de tipo real*/

int main()
{
  int DIS, TIE;
  float BIL;
  printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
  scanf("%d %d", &DIS, &TIE);
  if((DIS*2 > 500) && (TIE > 10))
    BIL = DIS * 2 * 0.19 * 0.8;
  else
    BIL = DIS * 2 * 0.19;
  printf("\n\nCosto del billete: %7.2f" , BIL);
}