#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,int left, int mid, int right){
    int subArray1= mid-left+1;
    int subArray2= right-mid;

    // Create Arrays
    int *leftArray = new int[subArray1];
    int *rightArray = new int[subArray2];

    // copy value into subarrays
    // left array copy
    for(int i=0;i<subArray1;i++)
        leftArray[i]=arr[left+i];

    // right array copy
    for(int j=0;j<subArray2;j++)
        rightArray[j]=arr[mid+1+j];

    int indexOfSubArray1=0;
    int indexOfSubArray2=0;
    int indexOfMergedArray=left;
    
    while( indexOfSubArray1 < subArray1 && indexOfSubArray2<subArray2){
        if (leftArray[indexOfSubArray1] <= rightArray[indexOfSubArray2]){
            arr[indexOfMergedArray++]=leftArray[indexOfSubArray1];
        }else{
            arr[indexOfMergedArray++] = rightArray[indexOfSubArray2++];
        }
    }

    while(indexOfSubArray1 < subArray1){
        arr[indexOfMergedArray++] = leftArray[indexOfSubArray1++];
    }

    while(indexOfSubArray2 < subArray2){
        arr[indexOfMergedArray++] = leftArray[indexOfSubArray2++];
    }
    
    delete []leftArray;
    delete []rightArray;
}
void mergeSort(vector<int>& arr,int start, int end){
    if(start>=end) return;
    int mid=start+(end-start)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end);
}

int main(){
    vector<int> arr{7,3,5,4,3,2,1};
    int n=7;
    cout<<"Before Sort : ";
    for(int i:arr)
        cout<<i<<" ";
    mergeSort(arr,0,n-1);

    cout<<endl<<"After Sort : ";
    for(int i:arr)
        cout<<i<<" ";

    return 0;
}