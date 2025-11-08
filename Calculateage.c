#include<stdio.h>
int main()
{
    int CurrentYear,BirthYear,age;
    printf("Please enter current year: ");
    scanf("%d",&CurrentYear);
    printf("Please enter your birth age:");
    scanf("%d",&BirthYear);

    age=CurrentYear-BirthYear;
    
    printf("your age is: %d",age);

    return 0;
}