#include <stdio.h>

int main(){
    char firstname[50], lastname[50];

    printf("Enter your first name and last name ");
    scanf("%s %s", &firstname, &lastname);

    printf("The abreviated name is %c %c",firstname[0], lastname[0]);

    return 0;
}
