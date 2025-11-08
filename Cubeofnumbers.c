#include<stdio.h>

void main()
{
    int i,ntr;

    printf("Input number of terms:");
    scanf("%d",&ntr);
    for(i=1;i<=ntr;i++)
    {
        printf("Number is:%d and cube of the %d is:%d\n",i,i,(i*i*i));
    }
    
    
}