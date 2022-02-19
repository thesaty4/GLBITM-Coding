#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> candidates{1,2,3,4,5,6};
    int target=7;
    vector<vector<int>> ans;
        for(int i=0;i<candidates.size();i++){
            int sum=0;
            vector<int> elms;
            bool flag=false;
            for(int j=i;j<candidates.size();j++){
                elms.push_back(candidates[j]);
                if(sum+candidates[j] == target){
                    flag=true;
                    break;
                }else{
                    continue;
                }
            }
            
            if(flag){
                ans.push_back(elms);
                ans.push_back({sum});
                break;
            }
        }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }

    return 0;
}
