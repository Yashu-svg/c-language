#include<stdio.h>

int main()
{
    float n1,n2;
    printf("____");
    printf("Enter the first Number:");
    scanf("%f",&n1);
    printf("Enter the second Number:");
    scanf("%f",&n2);
    printf("____");
    printf("Num1 :%f \nNum2 :%f",n1,n2);
    printf("\nSum:%f",n1+n2);
    printf("\nDifference:%f",n1-n2);
    printf("\nProduct:%.2f",n1*n2);
    printf("\nDivison:%.2f",n1/n2);
    return 0;
}