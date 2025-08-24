#include<stdio.h>
#include<math.h>
     //R=rate of interest for a year
    //P=Principle amount
    //r=Rate of interest per month
    //N=Total number of years
    //n=converting years to months n=N*12

    //EMI=(P*r)*((1+r)^N)/((1+r)^N-1)
    //r =R/12*100


int main(){
    
    //Defining variables
    float P,R,r,n,EMI,EMI1,EMI2,EMI3;
    int N;
    //Taking input from user
    printf("SBI interest rate: 6/-\n");
    printf("HDFC interest rate: 7/-\n");
    printf("Enter the principal amount: ");
    scanf("%f",&P);
    printf("Enter the Annual Interest rate: ");
    scanf("%f",&R);
    printf("Enter the number of Years: ");
    scanf("%d",&N);

    //conversions
    r=R/12;//Monthly interest Rate
    n=N*12;//total number of months
    //logic for the formula in c program
    EMI=(P*r*pow(1+r,n))/(pow(1+r,n)-1);
    EMI1=(P*0.5*pow(1+0.5,n))/(pow(1+0.5,n)-1);
    EMI2=(P*0.58*pow(1+0.58,n))/(pow(1+0.58,n)-1);
    EMI3=EMI2-EMI1;
    //Printing the output
    printf("The Monthly EMI will be : %.2f\n",EMI);
    printf("The EMI for SBI will be:%.2f \n",EMI1);
    printf("The EMI for HDFC will be:%.2f \n",EMI2);
    printf("The difference between HDFC and SBI will be:%.2f",EMI3);
    

    return 0;
    //show rate of interest difference in hdfc and sbi and their difference

}
    
   /*
int main(){
#include<stdio.h>
#include<math.h>
//EMI=P*r(1+r)^n/[(1+r)^n]-1
//declare variables
float P,r,x,n,N,EMI,x2,x4,x_2,x_4,EMI2,EMI4,EMI_2,EMI_4;
//take input from user
printf("Enter the principal amount-->");
scanf("%f",&P);
printf("Enter the annual interest rate-->");
scanf("%f",&r);
printf("Enter the period in years -->");
scanf("%f",&N);
//Convert annual percentage rate to monthly decimal rate
r=r/(12*100);
n=N*12;
//calculation
x=pow(1+r,n);
EMI=(P*r*x)/(x-1);
x2=pow(1+r,n+12);
EMI2=(P*r*x)/(x-1);

}
*/