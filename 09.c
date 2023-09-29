#include <stdio.h>

int main(){
    int a;

    printf("Enter the number ");
    scanf("%d",&a);

    if(a>0)
    printf("The number you entered is positive");

    if(a==0)
    printf("The number you have entered is 0");

    if(a<0)
    printf("The number you entered is negative");

    return 0;
}
