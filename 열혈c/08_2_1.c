#include <stdio.h>


int main(){
    int i = 1, j = 1;
    while(1){
        for(j=1;j<=i;j++){
            if( i % 2 == 1){
                continue;
            }
            else{
                printf("%dx%d = %d \n",i,j,i*j);
            }
        
        }
        i++;
        if(i>9){
            break;
        }
    }
    return 0;
}