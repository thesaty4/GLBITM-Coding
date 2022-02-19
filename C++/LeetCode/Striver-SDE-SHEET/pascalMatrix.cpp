#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> pascal;
    int num=5;
    pascal.push_back({1});
    for(int i=0;i<num-1;i++){
        vector<int> subArray;
        subArray.push_back(1);
        for(int j=0;j<i;j++){
            int sum=pascal[i][j]+pascal[i][j+1];
            subArray.push_back(sum);
        }
        subArray.push_back(1);
        pascal.push_back(subArray);
    }

    for(int i=0;i<num;i++){
        for(int sp=5-1;sp>i;sp--)
            cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}