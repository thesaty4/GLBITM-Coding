#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(vector<int> arr,vector<int> temp,int k,int n){
    cout<<"Sorted Array is \t\t : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    arr=temp;
    cout<<endl<<"Sorted Rotated Array is  : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<"(Rotate with "<<k<<" position)";

    return temp;
}
int findPivot(vector<int> arr,int n){
    int flag=-1;
    for(int i=0;i<n-1;i++){
        // cout<<endl<<arr[i];
        if(arr[i]>arr[i+1]){
            flag=i;
            break;
        }
        
    }
    return flag;
}
int binarySearch(vector<int> arr,int start,int end,int key){
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            break;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,8,9};
    int n=arr.size(),k=3;
    vector<int> temp(n);
    vector<int> rArray =rotateArray(arr,temp,k,n);
    arr=rArray;
    // find element from sorted rotated array 
    int key=5,ans=-1;
    int pivot = findPivot(arr,n);
    int isPresent;
    if(pivot != -1){
        cout<<endl<<"Pivote is "<<pivot<<endl;
         if(key<=arr[pivot] && key>=arr[0]){
            // go to left part of rotated array
            isPresent = binarySearch(arr,0,pivot,key);
        }else{
            // go to right part of rotated Array
           isPresent = binarySearch(arr,pivot+1,n-1,key);
        }

        if(isPresent != -1)
            cout<<"Key is present at index : "<<isPresent;
        else
            cout<<"Key is not present";
    
    }
    else{
        cout<<endl<<"Pivot is not found";
    }
    return 0;
}