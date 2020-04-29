#include <stdio.h>
#define count 20
int main(){
    int tmp = 0;
    int data[count];
    int i=0, j=0;


    printf("num: \n");
    for(i=0;i<count;i++){
        scanf("%d", &data[i]);
    }
    for(i = 0; i<count; i++){
        for(int j=0; j<count-i; j++){
            if(data[j]>data[j+1]){
                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
                
            }
            
        }
    }
    for(i = 0;i<count; i++){
        printf("%d, ",data[i]);
    }

    return 0;
}