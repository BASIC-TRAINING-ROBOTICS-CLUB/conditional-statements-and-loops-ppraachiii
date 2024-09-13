// max of 3 numbers
int main()
{
    int a,b,c;
    float max;
    printf(":To find maximum of 3 numbers: \n");
    printf("enter number 1: ");
    scanf("%d",&a);
    printf("enter number 2: ");
    scanf("%d",&b);
    printf("enter number 3: ");
    scanf("%d",&c);
    max = (a+b+c)/3;
    printf("%f",max);
    return 1;
}
