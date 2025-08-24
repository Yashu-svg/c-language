#include<stdio.h>
int main(){
    int markp,markc,markm,total,percent,cgpa;
    //taking input from user
    printf("Enter Marks for physics: ");
    scanf("%d",&markp);
    printf("Enter Marks for chemistry: ");
    scanf("%d",&markc);
    printf("Enter Marks for maths: ");
    scanf("%d",&markm);
    
    //grading the person based on marks
    /*
    90+=a
    75-90=b
    65-75 c
     below 65 fail*/
     //physics
     if (markp<65)
     {
        printf("Your Grade is :fail\n");
     }
     else if (markp>=65 && markp<=75)
     {
        printf("Your Grade is :C\n"); 
     }
     else if (markp>=75 && markp<=90)
     {
        printf("Your Grade is :B\n"); 
     }
     else if (markp>=90 && markp<=100)
     {
        printf("Your Grade is :A\n"); 
     }
     else{
        printf("Wrong input\n");
     }
     //chemistry
     if (markc<65)
     {
        printf("Your Grade is :fail\n");
     }
     else if (markc>=65 && markc<=75)
     {
        printf("Your Grade is :C\n"); 
     }
     else if (markc>=75 && markc<=90)
     {
        printf("Your Grade is :B\n"); 
     }
     else if (markc>=90 && markc<=100)
     {
        printf("Your Grade is :A\n"); 
     }
     else{
        printf("Wrong input\n");
     }
     //maths
     if (markm<65)
     {
        printf("Your Grade is :fail\n");
     }
     else if (markm>=65 && markm<=75)
     {
        printf("Your Grade is :C\n"); 
     }
     else if (markm>=75 && markm<=90)
     {
        printf("Your Grade is :B\n"); 
     }
     else if (markm>=90 && markm<=100)
     {
        printf("Your Grade is :A\n"); 
     }
     else{
        printf("Wrong input\n");
     }
     total=markp+markc+markm;
     percent=total/3.0;
     cgpa=percent/10;
     
     printf("|Physics   |Chemistry |Maths     |Percentage|CGPA      | \n");
     printf("|  %d      |   %d     |  %d      | %d       |  %d       | \n",markp,markc,markm,percent,cgpa);
     //physics
     if (markp<65)
     {
        printf("|   F");
     }
     else if (markp>=65 && markp<=75)
     {
        printf("|   C"); 
     }
     else if (markp>=75 && markp<=90)
     {
        printf("|   B"); 
     }
     else if (markp>=90 && markp<=100)
     {
        printf("|   A"); 
     }
     else{
        printf("Wrong input\n");
     }
      //chemistry
     if (markc<65)
     {
        printf("      |    F");
     }
     else if (markc>=65 && markc<=75)
     {
        printf("      |    C"); 
     }
     else if (markc>=75 && markc<=90)
     {
        printf("      |    B"); 
     }
     else if (markc>=90 && markc<=100)
     {
        printf("      |    A"); 
     }
     else{
        printf("Wrong input");
     }
     //maths
     if (markm<65)
     {
        printf("     |   F      |");
     }
     else if (markm>=65 && markm<=75)
     {
        printf("     |   C      |"); 
     }
     else if (markm>=75 && markm<=90)
     {
        printf("     |   B      |"); 
     }
     else if (markm>=90 && markm<=100)
     {
        printf("     |   A      |"); 
     }
     else{
        printf("Wrong input");
     }
    return 0;
}
/*
 phy chem math check grade for each subject and total marks and  */