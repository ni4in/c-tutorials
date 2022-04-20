#include<stdio.h>
int main()
{
    unsigned int a = 4;

  
    unsigned int result = ~a;
    int left_shift = a<<2;
    int right_shift = a>>2;

    printf("compliment is %d  left_shift is %d right_shift is %d \n",result, left_shift, right_shift );

    return 0;
}