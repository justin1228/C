#include <stdio.h>


void Swap(int a, int b, int tmp){
   tmp = a;a =b; b = tmp;
}


int main(){
    int arr[]= {1,10,5,8,7,6,4,3,2,9};
    int i,j,min,index, temp;

    for (i=0; i<10;i++){
        min = arr[i];
        for (j=i; j<10 ; j++){
            if(arr[j]< min){
                min = arr[j];
                index = j;
                
            }
            
        }
        Swap(arr[index], arr[i], temp);
    }

    for(i=0; i<10;i++){
        printf("%d ", arr[i]);
    }

    return 0;

}