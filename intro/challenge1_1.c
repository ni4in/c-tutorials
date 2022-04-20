/* 
Author : Nithin
Purpose : This program will calculate the area and rectnagle of a rectangle 
The values of length and breadth will be entered using command line arguments
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    double length = atof(argv[1]);
    double breadth = atof(argv[2]);

    double perimeter = 2*(length + breadth);
    double area = length*breadth;
    
    printf("area is %.2lf and perimeter is %.2lf\n", area, perimeter);

    return 0;
} 