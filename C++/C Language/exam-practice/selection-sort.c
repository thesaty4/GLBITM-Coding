#include<stdio.h>
void main(){
    // Insertion Sort
    // binary -> element sorted
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int tm,i,j;
    int current;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\n Before Swap : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    for(i=1;i<size;i++){
        current=arr[i];
        j=i-1;
        while(j>=0 || arr[j+1]>arr[j]){
        // while(j>=0 || arr[j+1]<arr[j]){ accending order
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    printf("\n After Swap : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}