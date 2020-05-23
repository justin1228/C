#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int tmp = n*2-i-1;
        for(int j = 0; j < n*2; j++){
            
           if(j<=i){
               printf("*");
           }
           else if(j>i && j<tmp){
               printf(" ");
           }
           else{
               printf("*");
           }
        }
        printf(" \n");
    }

    return 0;
}