/* 
Author : Nithin
Purpose : 
A program to calculates weekely pay. The program will ask the user to enter the number of hours worked in a week via the keyboard . The program will display as output the gross pay, the taxes and the net pay
Follwoing are the assumptions :
1. Basic pay rate = $12.00/hr
2. Overtime(in excess of 40 hours) = time and half 
3. Tax rate :
    a. 15% of the first $300 
    b. 20% of the next $150
    c. 25% of the rest

*/
#include<stdio.h>
int main()
{
    float hours, overtime,overtime_pay,total_pay,tax;
    printf("Enter weekely work hours\n");
    scanf("%f",&hours);
    if (hours >40)
    {
        total_pay = (((hours-40)*1.5)  + 40)*12;

    }
    else 
    {
        total_pay = 40*1.2;
    }
    
    if (total_pay <= 300)
    {
        tax = 0.15*total_pay;
    }
    else if (total_pay <= 450)
    {
        tax = 
    }