#include<iostream>
using namespace std;
int sumOfarray(int *arr,int size,int sum=0){
    if(size==0){
        return sum;
    }
    sum+=*arr;
    return sumOfarray(arr+1,size-1,sum);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int sum = sumOfarray(arr,6);
    cout<<"Sum of this is array : "<<sum;
    return 0;
}