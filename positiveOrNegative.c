#include<stdio.h>
int main(){

    int number;

    while(1){


        printf("Enter Your Number To Check Negative Or Positive= ");

    scanf("%d",&number);

    if(number>=0){

        printf("%d is Positive Number\n",number);

    }
    else if(number<0){

         printf("%d is Negative Number\n",number);
    }


    }
return 0;
}
