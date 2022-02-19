#include<iostream>
#include<vector>
using namespace std;
int partion(vector<int>& data,int start,int end){
    int pivot=data[start];
    int cnt=0;
    for(int i=start+1;i<=end;i++){
        if(data[i]<=pivot){
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex=start+cnt;
    swap(data[pivotIndex],data[start]);

    // left and right wala par sambhal lete hai
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(data[i]<pivot){
            i++;
        }

        while(data[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(data[i++],data[j--]);
        }
    }
    return pivotIndex;

}
void quickSort(vector<int>& data,int start,int end){
    // base condition
    if(start>=end)
        return;
    int p=partion(data,start,end);

    // left array sort
    quickSort(data,start,p-1);

    // right part sort
    quickSort(data,p+1,end);
}
int main(){
    vector<int> data{9,8,7,6,5,4,3,2,1};

    quickSort(data,0,data.size()-1);
    for(int i:data)
        cout<<i<<" ";
    return 0;
}