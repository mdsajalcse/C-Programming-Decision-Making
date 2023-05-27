#include<stdio.h>
int main(){

    int year;

    printf("Enter Year to check Leap Year or Not = ");

    scanf("%d",&year);

  if((year%4==0 && year%100!=0)|| (year%400==0))? Leap Year : not leap year;


return 0;
}
