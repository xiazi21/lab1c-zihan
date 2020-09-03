//author Zihan Xia zfx5078@psu.edu
//collaborator Lynn Francis jtf5383@psu.edu
//collaborator Xinyi Yang xvy5166@psu.edu
//collaborator Shubhang Srikoti svs6959@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) 
{ 
  double f;
 char *temp= readline("Enter temperature in celsius: ");
 double c = atof(temp);
 f=(1.8*c)+32;
 printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",c,f);
return 0;
}