#include<stdio.h>
/*
int main(){
int Ans1;
int Ans2;
int i=0;

printf("            | Quizz|\n");
printf(" Round1\n");
printf("Q1What is your name?\n");
printf("1.Yash\n");
printf("2.Aniket\n");
printf("3.Shantanu\n");
printf("4.Atharva\n");
scanf("%d",&Ans1);
switch (Ans1)
{
case 1:
    printf("Right Answer",i++);
    break;
case 2:
    printf("Wrong Answer");
    break;
case 3:
    printf("Wrong Answer");
    break;
case 4:
    printf(" Wrong Answer");
    break;

default:
      printf("Wrong input");
    break;
}
printf("Q1What is your name?\n");
printf("1.Yash\n");
printf("2.Aniket\n");
printf("3.Shantanu\n");
printf("4.Atharva\n");
scanf("%d",&Ans2);
switch (Ans2)
{
    case 1:
    printf("Right Answer",i++);
    break;
case 2:
    printf("Wrong Answer");
    break;
case 3:
    printf("Wrong Answer");
    break;
case 4:
    printf(" Wrong Answer");
    break;

default:
      printf("Wrong input");
    break;
}
printf("Score is :%d ",i);
}
*/
/*
int main(){
int input;
printf("|Quizz|\n");
printf("Enter which case to execute:(1,2)");
scanf("%d",&input);
switch (input)
{
case 1:
     printf("Case 1 is executed");
    break;
case 2:
     printf("Case 2 is executed");

default:
     printf("Wrong Input");
    break;
}
}
*/
/*
int main(){
int input;
int marks;
printf("|Quizz|\n");
printf("Enter 1 for pass or fail and 2 to execute");
scanf("%d",&input);
printf("Enter Marks:(0,100):");
scanf("%d",marks);
switch (input)
{
case 1:
     if (marks>40 && marks<100)
     {
        printf("Pass");
     }
     else{
        printf("Fail");
     }
     
    break;
case 2:
     printf("Case 2 is executed");

default:
     printf("Wrong Input");
    break;
}
}

*/
/*
int main(){
    int marks;
    printf("User Enter Marks(0-100):");
    scanf("%d",&marks);
    char grade=(marks>=90)?'A':(marks>=40)?'P':'F';
    printf("You Result is:%c\n",grade);
    return 0;

}
    */
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    char great[10];
printf("Enter Number:")    ;
scanf("%d",num1);
printf("Enter Number:");
scanf("%d",num2);
printf("Enter Number:")    ;
scanf("%d",num3);
printf("Enter Number:");
scanf("%d",num4);

great=(num1>num2)?(num1>num3)?((num1>num4)?num1:num2);
printf("The Greatest number is:%d",great);
return 0;

}
/*15,4,54,16*/
