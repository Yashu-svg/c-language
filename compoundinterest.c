#include<stdio.h>
#include<math.h>
int main(){
    //defining variable
    float principal,rate,time,maturityamt,total,power,n;
    //taking input from user
    printf("Hello user!!,This is a program for claculating compound interest\n");
    printf("Enter principal amount: ");
    scanf("%f",&principal);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter the number of times:");
    scanf("%f",&n);
    printf("Enter Time taken:");
    scanf("%f",&time);
    //calculations
    rate=rate/100;
    maturityamt = principal*pow((1+rate/n),n*time);
    total= maturityamt-principal;
    //output
    printf("Total compound interest would be : %.2f",total);
    return 0;
    
}