#include <stdio.h>

int main(){
    int a,b;

    printf("Enter the numbers ");
    scanf("%d %d",&a,&b);

    if(a>b && a>c){
        printf("The greatest number among the two is %d",a);
    }

    else{
        printf("The biggest number among the three is %d",b);
    }

    return 0;
}
