#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    if (size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }else{
        return isSorted(arr+1,size-1);
    }
}
int main(){
    int arr[]={1,2,3,4,5,5};
    if(isSorted(arr,6)){
        cout<<"Sorted Array ";
    }else{
        cout<<"Array is not sorted";
    }
    return 0;
}