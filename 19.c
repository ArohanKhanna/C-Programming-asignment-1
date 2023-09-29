#include <stdio.h>

int main(){
    char a;

    printf("Enter your character ");
    scanf(" %c",&a);
    
    if(a==97 || a==101 || a==105 || a==111 || a==117){
        printf("The character is a vowel");
    }

    else{
        printf("The character is not a vowel");
    }

    return 0;
}
