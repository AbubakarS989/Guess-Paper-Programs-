#include <stdio.h>
int main()
{

    // Find positive , negative and zero entered by the user using if-else 

    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num<0){
        printf("Number is negative");
    }else if(num>0){
        printf("Number is positive");

    }else if(num==0){
        printf("Number is zero");

    }
}