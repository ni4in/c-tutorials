#include <stdio.h>

int main()
{
    char str[100];
    int i,j;
    printf("Enter the value:\n");
    scanf("%s",str);
    scanf("%d",&i);
    scanf("%d",&j);
    printf("You entered:%s %d %d", str,i,j);
    return 0;
}
