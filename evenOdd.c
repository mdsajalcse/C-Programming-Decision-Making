#include<stdio.h>
int main(){

    int number;

    printf("Enter Your Number To Check Even Or Odd= ");

    scanf("%d",&number);

    if(number%2==0){

        printf("%d is Even Number",number);

    }
    else{

         printf("%d is Odd Number",number);
    }

return 0;
}
