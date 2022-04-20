#include<stdio.h>

int main()

{
    int minutes;
    float minutes_in_year = 365*24*60;

    printf("Enter the minutes\n");
    scanf("%d",&minutes);
    float total_year = 0 ;
    total_year = minutes/minutes_in_year;
    printf("total year is %f", total_year);
    return 0; 
   


}