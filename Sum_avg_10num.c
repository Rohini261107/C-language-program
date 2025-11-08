#include<stdio.h>

void main()
{
    int i,n,sum=0;
    float Avg;
    printf("Inputthe 10 numbers:\n");

    for(i=1;i<=10;i++)
    {
        printf("Number-%d:",i);
        scanf("%d",&n);
        sum+=n;
    }
    Avg=sum/10.0;
    printf("The sum of 10 no is:%d\n The Average is:%f\n",sum,Avg);

    
}