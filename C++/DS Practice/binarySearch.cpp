#include<iostream>
using namespace std;
int main(){
    int key=9,flag=0,arr[10]={1,2,3,4,6,7,8,9,55,99},n=10,s,e,mid;
    s=0;
    e=n-1;
    mid=s+(e-s)/2; // devide the array into two part
    while(s<=e){
        if(arr[mid]==key){
            flag=1;
            break;
        }else if(arr[mid]>key){
            e=mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if(flag==1)
        cout<<"Key is present";
    else
        cout<<"Key is not present";
    return 0;
}