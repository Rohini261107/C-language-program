#include<stdio.h>
int main()
{
    float side,perimeter;

    printf("Enter the side of the square:");
    scanf("%f",&side);

    perimeter=4*side;

    printf("Permiter of the square is:%.2f",perimeter);

    return 0;
}