#include <stdio.h>

double powerOfTwo(int sizeArr){
    int power = 1; //for initialize
    for(int i = 0; i<sizeArr; i++){
        if(i>=1){
            power *= 2;
            
        }

    }
    return power;
}

int main(){
    int arr[] = {2,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int product =1;
    int p = powerOfTwo(n);

    for (int i = 0;i<n; i++){
        for(int j = 0; j <p; j++){
            product *= arr[i];

        }
    }
    
    printf("%d \n", product);

    return 0;
}