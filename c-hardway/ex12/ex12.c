#include<stdio.h>
int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[7] = {'a'};

    printf("the numbers : %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("the name : %c %c %c %c %c %c %c  \n", name[0], name[1], name[2], name[3], name[4], name[5], name[6]);

    printf("the name: %s \n", name);

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    name[0] = 'n';
    name[1] = 'i';
    name[2] = 't';
    name[3] = 'h';
    name[4] = 'i';
    name[5] = 'n';
    name[6] = '\0';


    printf("the numbers : %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("the name : %c %c %c %c %c %c %c  \n", name[0], name[1], name[2], name[3], name[4], name[5], name[6]);

    printf("the name: %s \n", name);

    char *another = "nithin";


    printf("another: %s \n", another);


    printf("another  : %c %c %c %c %c %c %c  \n", another[0], another[1], another[2], another[3], another[4], another[5], another[6]);


    return 0;
    


}
