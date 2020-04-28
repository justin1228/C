#include <stdio.h>

int main(){
    double num1, num2;

    printf("num1: ");
    scanf("lf", &num1);
    printf("num2: ");
    scanf("lf", &num2);

    printf("plus: %lf minus: %lf multifly: %lf divide: %lf", num1+num2, num1-num2, num1*num2, num1/num2);
}