#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int* b;
 
    printf("Размер массива=");
    scanf("%d",&n);
 
    printf("Массив:\n");
 
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
 
    for(i=1;i<n;i++)
        if(b[i-1]>b[i])
        {
            printf("True\n");
            break;
        }
 
        if (i==n)
            printf("False\n");
 
        return 0;
 
}

