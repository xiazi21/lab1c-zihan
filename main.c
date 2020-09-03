#include <stdio.h>

int main(void) 
{
  float i,j ;
  printf("Enter temperature in celsius:"); 
  scanf("%f",&i);
  j=(i*1.8)+32;
  printf("%.6f° in Celsius is equivalent to %.6f°",i,j);
  return 0;
}