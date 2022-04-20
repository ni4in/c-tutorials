#include<stdio.h>
#include<stdbool.h>
int main()
{
    enum primaryColor {red, yellow, blue};
    enum direction {up, down, left =10, right};
    enum direction mydirection = left;
    enum direction otherDirection = right; 
    enum direction secondDirection = down;
    enum primaryColor myColor;
    myColor = red;
    printf("myColor is %d\n",myColor);
    printf("%d %d %d",mydirection,otherDirection,secondDirection);
    enum gender {male,female};
    enum gender myGender = male;
    enum gender anotherGender = female;
    bool isMale = (myGender == anotherGender);
    printf("\n isequal %d\n",isMale);



}