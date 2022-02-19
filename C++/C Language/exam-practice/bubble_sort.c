#include<stdio.h>
void main(){
    // binary -> element sorted
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int tm,i;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\n Before Swap : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    for(i=0;i<size-1;i++){
        for(int j=0;j<(size-1)-i;j++){
            if(arr[j]<arr[j+1]){ //Descending Order
            // if(arr[j]>arr[j+1]){ //Ascending Order

                // swap
                tm=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tm;
            }
        }
    }

    printf("\n After Swap : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}