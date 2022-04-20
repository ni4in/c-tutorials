/* Author : nithin
Program: Area and perimeter of a rectangle
*/

#include<stdio.h>
int main()
{
    double length = 4;
    double height = 6;
    double perimeter = 2*(length + height);
    double area = length*height;

    printf("the height is %lf---length is %lf---perimeter is %lf---area is %lf\n",length, height, perimeter, area);
    return 0;


}