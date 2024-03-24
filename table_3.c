#include <stdio.h>
int main()
{

    //  print table of that number entered by the user.
    // using any loop
    int num, table;
    printf("Enter a number to print a table:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        table = i * num;
        printf("%d*%d=%d\n", num, i, table);
    }
}