//program to check if a triangle is equilateral sides length is given by user
int main()
{
    int a,b,c;
    printf("Enter your First side: ");
    scanf("%d",&a);
    printf("Enter your second side: ");
    scanf("%d",&b);
    printf("Enter your third side: ");
    scanf("%d",&c);
    if(a==b && b==c)
    {
        printf("your triangle is equilateral !");
    }
    else
    {
        printf("your triangle is not equilateral");
    }
    return 0;
}