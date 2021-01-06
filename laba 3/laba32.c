#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <locale.h>

int main(void){

	float c1, c2;
	int i;
	printf("Введите c1:");
	scanf("%f", &c1);
	printf("Введите c2:");	
	scanf("%f", &c2);

	for(i=1; i<=6; i++){
		c2=c2+c1/2;
		c1=c1/2;
		c1=c1+c2/2;
		c2=c2/2;
}
 	printf("%f\n", c1);
 	printf("%f\n", c2);
	return 0;
}
// лаба 3 упр 2(готово)