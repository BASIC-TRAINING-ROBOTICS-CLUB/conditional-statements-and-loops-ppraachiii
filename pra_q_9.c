 //print multiplication table of 3.
#include <stdio.h>

int main()
{
    int i, x = 3;

    for (i = 1; i < 11; i++) 
    {
        printf("%d x %d = %d\n", x, i, x * i);
    }

}

