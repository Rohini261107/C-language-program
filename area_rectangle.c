#include<stdio.h>
int main()
{
    float length,breadth,area;

    printf("Enter the length of rectangle:");
    scanf("%f",&length);

    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);

    area=length*breadth;

    printf("Area of th rectangle+%.2f \n",area);
 
    return 0;
}