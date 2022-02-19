#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> vector,int student,int element,int mid){
    int sum=0;
    int stuCounter=0;
    for(int i=0;i<element;i++){
        //[10,20,30,40]
        if(vector[i]+sum<=mid){
            sum+=vector[i];
            stuCounter+=1;
        }else{
            if(stuCounter<=student){
                return false;
            }else{
                sum+vector[i];
                return true;
            }
        }
    }
    return true;
}

int main(){
    vector<int> vct={10,20,30,40};
    int student=2;
    int element=4;
    int start=0;
    int sum=0;
    for(int i = 0; i<vct.size();i++){
        sum+=vct[i];
    }
    int ans=-1;
    int end=sum; 
    //search space 0-----------------100
    int mid = start+(end-start)/2; // <= For Overflow condition, it can be s+e/2 also
    while (start<=end)      
    {
        if(isPossible(vct,student,element,mid)){
            ans=mid; // <= Save result
            end=mid-1; // End go to before mid
        }else{
            start=mid+1; // Start go to after mid
        }
        mid=start+(end-start)/2; // <= For Overflow condition, it can be s+e/2 also
    }
    cout<<ans;
}