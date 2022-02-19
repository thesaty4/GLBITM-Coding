#include<stdio.h>
void main(){
    int arr[10] = {2,4,6,7,9,20,9,9};
    int key=9;
    int flag=0;
    int freq=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    // traversing
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag=1;
            freq++;
        }
    }
    if(flag==0){
        printf("Key is not prest");
    }else{
        // key is prest 
        printf("Key is %d and frequency of this element is : %d",key,freq);
    }
}