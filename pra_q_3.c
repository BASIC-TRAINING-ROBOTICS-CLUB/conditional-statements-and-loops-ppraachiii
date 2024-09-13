// program to check if a triangle is right angled triangle -take input of 3 sides from user
int main()
{
    int a,b,c,p,q,k;
    printf("Enter your First side: ");
    scanf("%d",&a);
    printf("Enter your second side: ");
    scanf("%d",&b);
    printf("Enter your third side: ");
    scanf("%d",&c);
    if(a>>b && a>>c)
    {
       p=a;
       q=b*b+c*c;
    }
    else if (b>>a && b>>c)
    {
        p=b;
        q=a*a + c*c;
    }
    else
    {
        p=c;
        q=a*a + b*b;
    }
    k=p*p;
    
    if(k==q)
    {
        printf("your triangle is right angled triangle");
    }
    else
    {
        printf("your triangle is not right angled triangle");
    }
    return 0;
}
