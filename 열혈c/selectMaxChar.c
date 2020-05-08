#include <stdio.h>
int n= 100;

int main(){
    int i, j, max, len;

    char list[n];
    scanf("%s", list);

    while(list[len] !='\0'){
        len++;
    }
    for(i=0; i<len-1; i++){
            if(list[i]>list[max]){
                max = i;
            }

        }

    printf("%c \n", list[max]);

    return 0;
}