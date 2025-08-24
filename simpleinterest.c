#include<stdio.h>
int main(){
    //Making variables for taking input
    float principal,rate,time,maturity_amount,total;
    //Taking input from user
    printf("Hi User,This is the program for calculating simple Interest\n");
    printf("Enter the princpal amount: ");
    scanf("%f",&principal);
    printf("Enter the Interest rate amount: ");
    scanf("%f",&rate);
    printf("Enter the Duration: ");
    scanf("%f",&time);
    // calculations
    maturity_amount=principal*rate*time/100;
    total=maturity_amount+principal;
    //output
    printf("Your maturity amount will be : %.2f \n",maturity_amount);
    printf("Your principal amount was : %.2f\n",principal);
    printf("Total amount will be : %f",total);
    
    return 0;
}