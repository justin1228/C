#include <stdio.h>

int main(){
    int i=0, j=0;

    while(i<5){
        j = 0;
        while(j<i){
            printf("o");
            j++;
        }
        printf("* \n");
        i++;
    }
    return 0;
}