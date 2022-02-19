#include<iostream>
using namespace std;
#include<vector>
bool binarySearch(vector<int> arr,int start,int end,int key,bool ans){
    int mid=start+(end-start)/2;
    if(start>end){
        //base case // if we searched all element then our start>end <- which means that we have to return false
        ans = false;
        return ans;
    }
    
    if(arr[mid]==key){
        ans=true; // key found
        return ans;
    }else if(arr[mid]>key){
        return binarySearch(arr,start,mid-1,key,ans);
    }else if(arr[mid]<key){
        return binarySearch(arr,mid+1,end,key,ans);
    }else{
        // control reaches end of non-void function [-Wreturn-type]
        return ans;
    }
    
}
int main(){
    vector<int> arr={1,2,3,4,5,6,8,9};
    int key=9;
    bool ans = binarySearch(arr,0,arr.size()-1,key,false);
    if(ans)
        cout<<"Key is present ";
    else
        cout<<"key is absent";
}