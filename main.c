#include <stdio.h>

int main(void) 
{
  int i,j ;
  printf("Enter temperature in celsius:");
  scanf("%d",&i);
  j=(i*1.8)+32;
  printf("%d° in Celsius is equivalent to %d°",i,j);
  return 0;
}