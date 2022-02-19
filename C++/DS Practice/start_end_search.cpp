#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
void search(int* nums,vector<int>& ans,int& start,int& end,int& mid,int& target,int& size){
        if(size==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }else{
            while(start<=end){
                if(*(nums+mid)==target){
                    ans.push_back(mid-1);
                    ans.push_back(mid);
                    break;
                }else if(*(nums+mid)>target){
                    end=mid-1;
                }else if(*(nums+mid)<target){
                    start=mid+1;
                }
                mid=start+(end-start)/2;
            }
            if (ans.empty()){
                ans.push_back(-1);
                ans.push_back(-1);
            }
        }
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        vector<int> ans;
        int mid=start+(end-start)/2;
        search(&nums[0],ans,start,end,mid,target,end);
        return ans;
    }
};

int main(){
    Solution obj = Solution();
    vector<int> num={5,7,7,8,8,10};
    vector<int> ans(7);
    ans=obj.searchRange(num,8);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}