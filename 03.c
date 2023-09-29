#include <stdio.h>

int main(){
    float b,h,a;

    printf("Enter the base of the triangle ");
    scanf("%f",&b);

    printf("Enter the height of the triangle ");
    scanf("%f",&h);

    a=0.5*b*h;

    printf("The area of the triangle is %f",a);

    return 0;
}
