#include<stdio.h>
int main(){

    int number1, number2;

    while(1){


        printf("Enter Your Two Number To Check Large Or Small Or Equal= ");

    scanf("%d %d",&number1,&number2);

    if(number1>number2){

        printf("%d is Large Number\n",number1);
        printf("%d is Small Number\n",number2);

    }
    else if(number2>number1){

         printf("%d is Large Number\n",number2);
         printf("%d is small Number\n",number1);
    }
    else if(number1==number2){

        printf("Both are Equal..\n");
    }



    }
return 0;
}
