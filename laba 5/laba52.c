#include <stdio.h>
#include <math.h>

int main()
{
int i,j,h,k;
double n,m,buf;
h=-1;
n=4;
m=3;
k=m*n;
int p;
float b[4][3];
int a[4]={0,0,0,0};
float c[12]={0,0,0,0,0,0,0,0,0,0,0,0};

p=0;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
printf("введите элемент [%d,%d]\n",i+1,j+1);
scanf("%f",&b[i][j]);
}

printf("ваша матрица:\n");
for(i=0;i<n;i++){
printf("\n ");
for(j=0;j<m;j++)
{
c[p]=b[i][j];
printf(" %.2f",b[i][j]);
p+=1;
}}
for(i=0;i<n;i++){
h=h+1;
for(j=0;j<m;j++){

if(b[i][j]==0) j=3;
else a[h]=a[h]+1;

}}
if(a[0]==3) printf("\nв первой строке нет нулевых элементов");
else printf("\nв первой строке есть нулевые элементы");
if(a[1]==3) printf("\nво второй строке нет нулевых элементов");
else printf("\nво второй строке есть нулевые элементы");
if(a[2]==3) printf("\nв третьей строке нет нулевых элементов");
else printf("\nв третьей строке есть нулевые элементы");
if(a[3]==3) printf("\nв четвертой строке нет нулевых элементов");
else printf("\nв четвертой строке есть нулевые элементы");

for(i=0;i<k;i++)
for(j=0;j<k-i-1;j++)
if(c[j]<c[j+1])
{
buf=c[j];
c[j]=c[j+1];
c[j+1]=buf;
}

for(p=0;p<11;p++)
{
if(c[p]==c[p+1]) break;

}
printf("\nмаксимальное число, которое встречается более 1 раза:%f",c[p]);

}
