#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>arr,int n){
    int s=0,e=n-1,mid=s+(e-s)/2,min=INT_MAX;
    while(s<e){
        if(arr[mid]<min){
            min=mid;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,8,9};
    cout<<"Pivot Element Index is >> "<<findPivot(arr,arr.size());
    return 0;
}