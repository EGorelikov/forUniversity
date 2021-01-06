#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <locale.h>

int main(void){
	float r, m, a;
	int i;
	printf("Введите r:\n");
	scanf("%f", &r);
	printf("Введите m:\n");
	scanf("%f", &m);
	for(i=0; m>r; i++)
		r+=r*0.04;
		printf("%d\n", i);

return 0;
}
// лаба 3 упр 1(готово)