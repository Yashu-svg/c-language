#include<stdio.h>
int main()
/*{
    int n=1;

    printable:
    if (!((n>10 && n<20 ) || (n>30 && n<40)))
    {
        printf("%d,",n);
    }
    
    n++;



    if (n<=50)
    {
        
        goto printable;

    }
    
    
    return 0;
}*/
{
    int n=1;
    printable:
    printf("%d",n);
    
    n++;
    if (n==11)
    {
        n=20;
        goto printable;
    }
    if (n==31)
    {
       n=40;
        goto printable; 
    }
    
    
    if (n<=50)
    {
        printf(",");
        goto printable;
    }
    
    
    
    
    return 0;
}