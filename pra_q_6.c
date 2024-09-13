//program to check if number is +, - , or zero
int main()
{
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("your number is positive !");
    }
    else if (n<0)
    {
        printf("your number is negetive !");
    
    }
    else
    {
        printf("your number is zero !");
    }
    return 0;
}
