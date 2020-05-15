#include <stdio.h>

int main(){
    double PI = 3.1415;
    double * pPi;
    pPi = &PI;

    printf("%f \n", *pPi);
    printf("%x \n", pPi);

    return 0;
}