// take value of x and y and check its quadrant
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter value of X: ");
    scanf("%d",&a);
    printf("enter value of Y: ");
    scanf("%d",&b);
    if (a>0 && b>0)
    {
        printf("your x and y are in 1st quadrant !");
    }
    else if (a<0 && b>0)
    {
        printf("your x and y are in 2nd quadrant !");
    }
    else if (a<0 && b<0)
    {
        printf("your x and y are in 3rd quadrant !");
    }
    else if (a>0 && b<0)
    {
        printf("your x and y are in 4th quadrant !");
    }
    else
    {
        printf("enter your value again");
    }
}