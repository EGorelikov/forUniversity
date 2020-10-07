#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <locale.h>

int main(void){
	float x, y, z, mod, step, skob, s, a;
	printf("Введите x:\n");
	scanf("%f", &x);
	printf("Введите y:\n");
	scanf("%f", &y);
	printf("Введите z:\n");
	scanf("%f", &z);
	mod=fabs(cos(x)-cos(y));
	step=1+2*pow(sin(y),2);
	skob=1+z+z*z/2+z*z*z/3+z*z*z*z/4;
	a=pow(mod,step);
	s=a*skob;
	printf("%f\n", s);

return 0;

}
