#include<stdio.h>
void main(){
    // binary -> element sorted
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int key=8;
    int flag=0;
    int start=0,end=sizeof(arr)/sizeof(arr[0]);
    
    // int mid = start-(end+start)/2;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            printf("key is present and index is : %d ",mid);
            flag=1;
            break;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }



    if(flag==0){
        printf("Key is not prest");
    }
}