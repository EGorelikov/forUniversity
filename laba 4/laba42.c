#include <stdio.h>
#include <math.h>

int main()
{
int a[10];
int i;
int p=0;
int g=0;
int k;
k=10;
float sum;
sum=0;
float sred;
printf("введите свой массив из 10 элементов...\n");
for(i=0;i<10;i++){
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("\nваш массив...");
for(i=0;i<10;i++){
printf("%d ",a[i]);
sum=sum+a[i];
    
}
sred=sum/10;
printf("\nsum=%f",sum);
printf("\nsred=%f",sred);
for(i=0;i<10;i++){
if(a[i]<sred){
g++;
}

}
int b[10-g];
for(i=0;i<10;i++){
if(a[i]>=sred){
b[p]=a[i];
p++;
}}
printf("\nваш массив...");
for(p=0;p<10-g;p++){
printf("%d ",b[p]);

}    
}
