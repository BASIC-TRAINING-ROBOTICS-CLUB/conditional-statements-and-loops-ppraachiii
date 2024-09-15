#include <stdio.h>

int main() 
{
    long long number;
    int count = 0;
    int sum = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%lld", &number);

   
    if (number < 0) 
    {
        number = -number; 
    }

    
    do 
    {
        digit = number % 10;  
        sum += digit;   
        count++;
        number /= 10;         
    } while (number > 0);

    
    printf("Total digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
