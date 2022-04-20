#include<stdio.h>
int main()
{
    int number_to_test;
    printf("Enter the number to test:\n");
    scanf("%d",&number_to_test);

    if (number_to_test % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}