#include<iostream>
using namespace std;
int main(){
    // cout<<"HII";
    int s=0,e=6,ans=-1,k=77;
        int arr[7]={1,2,3,4,5,6,7};
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==k){
                ans=mid;
                break;
            }else if(arr[mid]<k){
                s=mid+1;
            }else if(arr[mid]>k){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        
    cout<<ans;
    return 0;
}