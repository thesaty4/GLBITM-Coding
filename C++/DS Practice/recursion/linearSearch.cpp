#include<iostream>
using namespace std;
void search(int *arr,int key,int size){
    if(key == *arr){
        cout<<"Key is found";
        return;
    }
    if(size==1){
        cout<<"Key is not found";
        return;
    }
    search(arr+1,key,size-1);
}
main(){
    int key=33;
    int arr[]={1,2,3,4,5,6};
    search(arr,key,6);   
    return 0;
}