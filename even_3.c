#include <stdio.h>
int main()
{
    // Check even or odd using if-else.
    int num;
    printf("Enter number to check even or odd:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd NUmber ");
    }
}