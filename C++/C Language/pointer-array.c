#include<stdio.h>
void main(){
   int arr[]={55,64,3,1,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   int *p = arr,i=0;
    p = arr; //or
    
    while(i!=size-1){
        printf("Address of arr[%d] : %x",i,);
    }
}