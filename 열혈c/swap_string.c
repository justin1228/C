#include <stdio.h>

int main(){
    int len = 0, i;
    char str[100];

    printf("type the string: ");
    scanf("%s", str);

    while(str[len] != '\0'){
        len++;
    }

    for(i=0; i<len/2; i++){
        char temp;

        temp = str[len-1-i];
        str[len-1-i] = str[i];
        str[i] = temp;
    }
    printf("swaped string: %s \n", str);

    return 0;
}