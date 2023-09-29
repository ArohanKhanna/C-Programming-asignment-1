#include <stdio.h>

int main(){
    float p,r,t,i;

    printf("Enter the principle, rate of interest, and number of years of interest ");
    scanf("%f %f %f",&p, &r, &t);
    i=(p*r*t)/100;

    printf("The ammount of interest, calculated simply is %f",i)

    return 0;
}
