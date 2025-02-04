#include<stdio.h>
#include<math.h>
void main ()

{ float x, sinx, tanx, cosx;

printf("enter you degrees: ");

scanf("%f", &x);

sinx=sin(x*(3.14/180.0));
tanx=tan(x*(3.14/180.0));
cosx=cos(x*(3.14/180.0));

printf("sinx=%f\n",sinx);
printf("tanx=%f\n",tanx);
printf("cosx=%f\n",cosx);

}