#include<stdio.h>

int main(int argc, char *argv[])
{
    int numArguments = argc;

    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Number of arguments: %d\n",numArguments);
    printf("Argument 1 in the program name: %s\n",arg1);
    return 0;

}