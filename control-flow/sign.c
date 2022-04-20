#include<stdio.h>
int main()
{
    int x, sign ;
    printf("enter the number \n");
    scanf("%d",&x);

    if (x > 0)
    {
        sign = 1;
    }
    else if (x == 0)
    {
        sign = 0;
    }
    else
    {
        sign = -1;
    }
    
    printf("sign is %d\n",sign);

    return 0;

}