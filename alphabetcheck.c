#include<stdio.h>
int main()
{
    char letter;
    printf("Enter any character:");
    scanf("%c",&letter);

      if((letter>='a' && letter<='z')||(letter<='A'&&letter<='Z'))
      {
        printf("%c is an alphabet \n",letter);
      }
      else{
        printf("%c is not an alphabet \n",letter);
      }
      
      return 0;

 }