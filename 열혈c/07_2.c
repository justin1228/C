#include <stdio.h>

int main(){
    int i =0;
    int sum=0;
    int j = 0;

    while(j<5){
        i = 0;
        while (i<=0){
            scanf("%d", &i);
            sum += i;
    }
        j++;
    }

    printf("result: %d \n", sum);

    return 0;
    
}