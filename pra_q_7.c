//program to check if the year entered after 2000 and its a leap year
int main()
{
    int n;
    printf("enter year after 2000: ");
    scanf("%d",&n);
    if (n%400==0)
    {
        printf("year is leap year");
    }
    else
    {
        printf("year in not leap year");
    }
}
