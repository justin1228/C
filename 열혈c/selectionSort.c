#include <stdio.h>

#define SWAP(x,y,temp)((temp)=(x), (x)=(y), (y)=(temp))

void selectionSort(int list[], int n){
    int i,j,min,temp;

    for (i=0; i<n-1; i++){
        min = i;

        for(j=i+1; j<n; j++){
            if(list[j]<list[min]){
                min = j;
            }

        }

        if(i != min ){
            SWAP(list[i],list[min],temp);
        }
    }

}

int main(){
    
    int i = 0;
    int arr[5]= {15,10,5,25,20};
    selectionSort(arr, 5);

    for(i=0;i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;



}