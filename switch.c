

/*
 * C program to print number of days in a month using switch case
 */
#include<stdio.h>

int main(){
        int monthName;
        printf("Enter Your Month between(1-12)::");
        scanf("%d",&monthName);
        switch(monthName){

    case 1:
        printf("It is January Month, 31 days");
        break;
    case 2:
        printf("It is  February, 28/29 days");
        break;
    case 3:
        printf("It is  March, 31 days");
        break;
    case 4:
        printf("It is  April, 30 days");
        break;
    case 5:
        printf("It is  May, 31 days");
        break;
    case 6:
        printf("It is  June, 30 days");
        break;
    case 7:
        printf("It is  July, 31 days");
        break;
    case 8:
        printf("It is  August, 31 days");
        break;
    case 9:
        printf("It is September, 30 days");
        break;
    case 10:
        printf("It is  October, 31 days");
        break;
    case 11:
        printf("It is November, 30 days");
        break;
    case 12:
        printf("It is  December, 31 days");
        break;
    default:
        printf("You Choice Invalid Key!!!");

        }

return 0;
}
