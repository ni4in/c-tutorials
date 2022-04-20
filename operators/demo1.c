#include<stdio.h>

int main()
{
    int a = 33;
    int b = 15;
    int result  = a++;
    printf("the result is %d  %d \n",result,a+1);
    int result1 = ++a ;
    printf("the result is %d %d\n", result1,a+1);
    

    return 0;
}