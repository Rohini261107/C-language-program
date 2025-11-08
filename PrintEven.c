#include<stdio.h>
int main()
{
    int n,i=2;  //start from 2,the first even number

    printf("Enter the upper limit 'n':");
    scanf("%d",&n);
    
    printf("Even numbers from 1 to %d are: \n",n);

    while(i<=n)
    {
        printf("%d",i);
        i++;
    }
    printf("\n");
  
    
    return 0;
}