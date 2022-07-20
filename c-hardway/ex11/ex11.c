#include<stdio.h>

int main(int argc, char *argv[])

{
   char letter = *argv[1];
   //int letter = 30; // to test the error

    switch(letter)
    {
        case 'a':
        case 'A':
            printf("letter is vowel \n");
            break;

        case 'e':
        case 'E':
            printf("letter is vowel \n");
            break;

        case 'i':
        case 'I':
            printf("letter is vowel \n");
            break;

        case 'o':
        case 'O':
            printf("letter is vowel \n");
            break;
        case 'u':
        case 'U':
            printf("letter is vowel \n");
            break;
        
        default:
            printf("letter is not a vowel \n");
            break;
    }

    return 0;
}
