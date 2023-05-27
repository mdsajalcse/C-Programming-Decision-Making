#include<stdio.h>
int main(){

    int year;

    while(1){


    printf("Enter Your Year To Check Leap Year Or Not = ");

    scanf("%d",&year);

    if((year%400==0) || (year%4==0)&&(year%100!=0)){

        printf("This Year is Leap Year\n",year);

    }
    else {

        printf("This Year is not Leap Year\n");
    }

    }
return 0;
}
