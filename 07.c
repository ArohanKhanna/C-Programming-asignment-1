#include <stdio.h>

int main(){
    float temp;

    printf("Enter the temperature in celcius ");
    scanf("%f",&temp);
    temp=(temp*1.8)+32;

    printf("The temperature in fahrenheit is %f",temp);

    return 0;
}
