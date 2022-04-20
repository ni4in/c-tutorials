#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a = 12;
    int b = 20;
    bool result;
    
    result = (a < 15) && (b<15);

    printf("result is %d\n",result);
    return 0;


}