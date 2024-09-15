#include <stdio.h>

int main()
 {
    int n;
    
    
    printf("Enter the number: ");
    scanf("%d", &n);

   
    if (n <= 0)
    {
        printf("enter a positive number.\n");
        return 1; 
    }

   
    long long first = 0, second = 1, next;
    
    printf("Fibonacci series up to %d terms:\n", n);

    
    if (n >= 1) 
    {
        printf("%lld ", first);
    }

   
    for (int i = 1; i < n; i++) 
    {
        printf("%lld ", second);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n"); 

    return 0;
}
