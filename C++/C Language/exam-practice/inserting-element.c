#include<stdio.h>
void main(){
    int arr[7] = {2,4,6,7,9,20};
    int idx=2;
    int val=100;
    int flag=0;
    int temp;
    int size=sizeof(arr)/sizeof(arr[0]);
    // traversing
    printf("Before Inserting : ");
    for(int i=0;i<size;i++) printf("%d ",arr[i]);
    

    for(int i=size-1;i>=idx;i--) arr[i+1]=arr[i];
    
    // inserting value
    arr[idx]=val;

    size=sizeof(arr)/sizeof(arr[0]);
    printf("\nBefore Inserting : ");
    for(int i=0;i<size;i++) printf("%d ",arr[i]);
    
}