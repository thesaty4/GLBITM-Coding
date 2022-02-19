#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6,8,9};
          // output [6,8,9,1,2,3,4,5] k=3
    vector<int> temp(arr.size());
    int k=3;
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}