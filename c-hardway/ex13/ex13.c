#include<stdio.h>
int main(int argc, char *argv[])
{
   // breaking the code 
   //changing the position of initialisation of full name with no null character
   // char full_name[] = {'N','i','t','h','i','n',' ','V'};
    int areas[] = {10,12,13,14,20};
    char name[] = {"Nithin"};
    // changing the initialisation of full name with no null character
    char full_name[] = {'N','i','t','h','i','n',' ','V','\0'};
    //char full_name[] = {'N','i','t','h','i','n',' ','V'};


    printf("The size of an int: %ld\n", sizeof(int));
    printf("the size of areas: %ld\n",sizeof(areas));
    printf("ratio: %ld \n", (sizeof(areas)/ sizeof(int) ));


    printf("The size of char: %ld \n", sizeof(char));
    printf("The size of the name: %ld \n", sizeof(name));
    printf("The ratio: %ld \n", (sizeof(name) / sizeof(char)));

    printf("size of full name: %ld \n",sizeof(full_name));
    printf("ratio: %ld \n", (sizeof(full_name) / sizeof(char)));

    printf("name = \" %s \" and full name = \" %s \" \n", name, full_name);

    areas[0] = 40;

    name[0] = 'H';

    printf("%d\n",areas[0]);
    printf("%s \n",name);


    return 0;

    
}
    




