#include <stdio.h>

int main(){
    float r,area,circ;
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    
    area=3.14*r*r;
    circ=3.14*2*r;

    printf("The area and circumfarance of the circle respectivley are - %f & %f",area, circ);
    
    return 0;
}
