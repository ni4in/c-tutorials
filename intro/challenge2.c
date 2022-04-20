/* 
Author : Nithin
Purpose : showcasing the use of enum 
*/

#include<stdio.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company var1 = GOOGLE;
    enum company var2 = XEROX;
    enum company var3 = EBAY;

    printf("the output is:\n %d \n %d \n %d\n",var2, var1, var3);

    return 0;
}