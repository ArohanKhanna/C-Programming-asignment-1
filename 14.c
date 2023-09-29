#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter the numbers ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("The greatest number among the three is %d",a);
    }

    if (b>a && b>c){
        printf("The biggest number among the three is %d",b);
    }

    if(c>a && c>b){
        printf("The biggest number among the three is %d",c);
    }

    return 0;
}
