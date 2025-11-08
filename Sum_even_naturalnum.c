#include<stdio.h>

void main()
{
    int i,n,sum=0;
    printf("Input number of terms:");
    scanf("%d",&n);
    printf("\nThe even numbers are:");

    for(i=1;i<=n;i++)
    {
        printf("%d",2*i);
        sum+=2*i;
    }
    printf("\n The sum of even natural numbers upto %d terms:%d\n",n,sum);

    
}
