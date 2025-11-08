#include<stdio.h>
int main()
{  float costPrice,sellingPrice,profit,loss;

    printf("Enter cost price:");
    scanf("%f",&costPrice);
    printf("Enter seeling price:");
    scanf("%f",&sellingPrice);

    if(sellingPrice>costPrice)
    {
        profit=sellingPrice-costPrice;
        printf("You made profit of %f \n",profit);
    }
    else if(costPrice>sellingPrice)
    {
        loss=costPrice-sellingPrice;
        printf("You made loss of %f \n",loss);
    }
    else{
        printf("No Profit ,No Loss. \n");
    }
    return 0;

}