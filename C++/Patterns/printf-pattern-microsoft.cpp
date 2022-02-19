#include<iostream>
#include<vector>
using namespace std;

    int design1(vector<int> &vct,int n,int i){
        if(vct[i]<=0){
            return i;
        }else{
            vct.push_back(vct[i]-5);
            return design1(vct,n,i+1);
        }
            
    }

    void design2(vector<int> &vct,int n,int i){
        if(vct[i]!=n){
            vct.push_back(vct[i]+5);
            design2(vct,n,i+1);
        }else{
            return;
        }
            
    }
//    Output: 16 11 6 1 -4 1 6 11 16
int main(){
        // code here
        int N=16;
        vector<int> vct;
        vct.push_back(N);
        int i = design1(vct,N,0);
        design2(vct,N,i);
        
        for(int i=0;i<vct.size();i++){
            cout<<vct[i]<<" ";
        }
    
    return 0;
}