#include<stdio.h>
int main(){

    char ch;

    while(1){

    printf("Enter Your Letter To Check Capital Or Small = ");

    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){

        printf("%c is Capital Letter\n",ch);

    }
    else if(ch>='a' && ch<='z') {

         printf("%c is Small Letter\n",ch);
    }

    }
return 0;
}
