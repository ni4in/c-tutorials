#include<stdio.h>
int main()
{
    printf("int size is %ld:\n",sizeof(int));
    printf("char size is %ld:\n",sizeof(char));
    printf("long size is %ld:\n",sizeof(long));
    printf("long long size is %ld:\n",sizeof(long long));
    printf("double size is %ld:\n",sizeof(double));
    printf("long double size is %ld:\n",sizeof(long double));

    return 0;
}