#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vt={1,2,3,4,5,6,6};
    int key=5,size=vt.size(),s=0,e=size-1,mid=s+(e-s)/2,left,right;
    while(s<=e){
        if(vt[mid]==key){
            left=mid-1;
            right=mid+1;
            e=mid-1;
        }else if(vt[mid]<=key){
            s=mid+1; // go to right
        }else if(vt[mid]>=key){
            e=mid-1; // end go to left
        }
        mid=s+(e-s)/2;
    }
    cout<<"LEFT : "<<left<<endl;
    cout<<"RIGHT : "<<right<<endl;
}