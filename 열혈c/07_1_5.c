#include <stdio.h>

int main(){
    int i,j=0,k,l;
    double result;

    printf("How many integer do you wanna use?");
    scanf("%d", &i);

    while (j<i){
        scanf("%d", &k);
        l += k;
        j++;
    }


    printf("result: %lf", (double)l/i);

    return 0;

}