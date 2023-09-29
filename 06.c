#include <stdio.h>

int main(){
    float max,sub1,sub2,sub3,sub4,sub5,per1,per2,per3,per4,per5;

    printf("Enter the maximum marks possible ");
    scanf("%f",&max);

    printf("Enter the marks of subject 1");
    scanf("%f",&sub1);
    per1=(sub1/max)*100;

    printf("Enter the marks of subject 2");
    scanf("%f",&sub2);
    per2=(sub2/max)*100;

    printf("Enter the marks of subject 3");
    scanf("%f",&sub3);
    per3=(sub3/max)*100;

    printf("Enter the marks of subject 4");
    scanf("%f",&sub4);
    per4=(sub4/max)*100;

    printf("Enter the marks of subject 5");
    scanf("%f",&sub5);
    per5=(sub5/max)*100;

    printf("The percentages of the subjects respectivley are %f %f %f %f %f",per1, per2, per3, per4, per5);

    return 0;
}
