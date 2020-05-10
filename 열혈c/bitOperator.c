#include <stdio.h>

unsigned char and(unsigned char a, unsigned char b){
    return a&b;
}

int main(){
    unsigned char a = 10; //1010
    unsigned char b = 14; //1110

    printf("0x%x \n", and(a,b));

    return 0;
}