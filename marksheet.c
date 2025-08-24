#include <stdio.h>
// classification of topic
int main()
{
    char name[50];
    int roll;
    int c;
    int p;
    int m;
    int t;
    float a;
    // INPUT
    printf("\nHello user , Welcome to scorecard portal\n");
    printf("Enter name:");
    scanf("%s", &name);
    printf("Enter Enrollment No:");
    scanf("%d", &roll);
    printf("Enter C.S-108 marks:");
    scanf("%d", &c);
    printf("Enter PH-120 marks:");
    scanf("%d", &p);
    printf("Enter MAT-202 marks:");
    scanf("%d", &m);
    // calculations
    t = c + p + m;
    a = t / 3.0;
    // OUTPUT
    printf("\n--REPORT CARD--\n");
    printf("Name: %s\n", name);
    printf("Enrollment No: %d\n", roll);
    printf("C.S-108 :%d\n", c);
    printf("PH-120:%d\n", p);
    printf("MAT-202:%d\n", m);
    printf("Total:%d\n", t);
    printf("Average:%d", a);
}