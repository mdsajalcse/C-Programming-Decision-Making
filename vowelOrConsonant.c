#include<stdio.h>
int main(){


while(1){
    char ch;



    printf("Enter Your Letter To Check Vowel Or Consonant = ");

    scanf("%c",&ch);

    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){

        printf("Vowel\n");

    }
    else {

         printf("Consonant\n");
    }
}

return 0;
}
