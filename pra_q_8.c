// check if an entered character is a vowel
#include <stdio.h>

int main()
{
    char i;
    printf("enter character: ");
    scanf("%c",&i);
    if (i=='a'|| i=='e'||i=='i'|| i=='o'||i=='u')
    {
        printf("your character is vowel ");
    }
    else
    {
        printf("your character is consonant");
    }
}