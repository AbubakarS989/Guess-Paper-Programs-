#include <stdio.h>
int main()
{
// Find factorial , I used for loop to find , if particular loop is mentioned in QS, we have to solve according to that method.
    int number;
    printf("Enter your number");
    scanf("%d", &number);

    int fac = 1;
    for (int i = 1; i < number; i++)
    {
        fac += fac * i;
    }
    printf("Factorial of %d is %d:", number, fac);
}