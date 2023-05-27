#include<stdio.h>
int main(){

    int number;

    while(1){


    printf("Enter Your Number To Check Pass Or Fail = ");

    scanf("%d",&number);

    if(number>=33){

        printf("You Pass in the Exam\n",number);

    }
    else {

        printf("You are Fail in the Exam\n");
    }

    }
return 0;
}
