#include<stdio.h>
int main(){
    int mark;
    //taking input from user
    printf("Enter Marks: ");
    scanf("%d",&mark);
    //grading the person based on marks
    /*
    90+=a
    75-90=b
    65-75 c
     below 65 fail*/
     if (mark<65)
     {
        printf("Your Grade is :fail");
     }
     else if (mark>=65 && mark<=75)
     {
        printf("Your Grade is :C"); 
     }
     else if (mark>=75 && mark<=90)
     {
        printf("Your Grade is :B"); 
     }
     else if (mark>=90 && mark<=100)
     {
        printf("Your Grade is :A"); 
     }
     else{
        printf("Wrong input");
     }
     
     
     

    return 0;
}
/*
 phy chem math check grade for each subject and total marks and  */