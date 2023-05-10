#include<stdio.h>
int main(){

 int age;
 printf("Enter Your Age= ");
 scanf("%d",&age);
 if(age<=10){
    printf("Hi! Your age is=%d . You are Child",age);

 }
 else if(age<=17 && age>=10)
{

    printf("Hi! Your age is=%d . You are Teenager",age);
}

else if(age>=18 && age<=40){
    printf("Hi! Your age is=%d . You are Young",age);
}
else if(age>=41){
         printf("Hi! Your age is=%d . You are Older",age);

}

return 0;
}
