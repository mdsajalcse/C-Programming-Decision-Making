#include<stdio.h>
int main(){

    int number1, number2,number3;

    while(1){


    printf("Enter Your Three Number To Check Large Or Small Or Equal= ");

    scanf("%d %d %d",&number1,&number2,&number3);

    if(number1>number2){

        printf("%d is Large Number\n",number1);
        printf("%d is Small Number\n",number2);

    }
    if(number1>number3){

        printf("%d is Large Number\n",number1);
        printf("%d is Small Number\n",number3);

    }
    else if(number2>number1){

         printf("%d is Large Number\n",number2);
         printf("%d is small Number\n",number1);
    }
    else if(number2>number3){

         printf("%d is Large Number\n",number2);
         printf("%d is small Number\n",number3);
    }

    else if(number3>number1){

         printf("%d is Large Number\n",number3);
         printf("%d is small Number\n",number1);
    }
    else if(number3>number2){

         printf("%d is Large Number\n",number3);
         printf("%d is small Number\n",number2);
    }
    else if(number1==number2 || number1==number3){

        printf("Both are Equal..\n");
    }

    }
return 0;
}
