#include <stdio.h>

int main(){
    char array[50];
    int index = 0, count = 0;
    scanf("%s", array);

    while(array[index] !='\0'){
        index ++;
        count ++;
    }

    printf("size of string: %d \n", count);

    return 0;


}