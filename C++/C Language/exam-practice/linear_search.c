#include<stdio.h>
void main(){
    int arr[10] = {2,4,6,7,9,20};
    int key=9;
    int flag=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    // traversing
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            printf("key %d is present and index is : %d",key,i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Key is not prest");
    }
}