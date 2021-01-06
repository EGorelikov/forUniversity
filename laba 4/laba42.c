#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, p, i,n, kol, numb, sum;
    int* b;
 
    printf("Размер массива:");
      scanf("%d",&n);
 
    printf("Массив:\n");
 
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

		sum=(b[0]+b[1]+b[2]+b[3]+b[4]+b[5]+b[6]+b[7]+b[8]+b[9])/n;
		printf("%d\n", sum);

//	for(l=0;l<1;l++){
		if(b[0]<sum) b[0]=0;
		if(b[1]<sum) b[1]=0;
		if(b[2]<sum) b[2]=0;
		if(b[3]<sum) b[3]=0;
		if(b[4]<sum) b[4]=0;
		if(b[5]<sum) b[5]=0;
		if(b[6]<sum) b[6]=0;
		if(b[7]<sum) b[7]=0;
		if(b[8]<sum) b[8]=0;
		if(b[9]<sum) b[9]=0;


//	printf("%d\n", b[i]);

/*    for(i=1;i<n;i++)
        if(b[i-1]>b[i])
        {
            printf("True\n");
            break;
        }
 
        if (i==n)
            printf("False\n");
 */

        return 0;
 
}