#include<iostream>
#include<vector>
using namespace std;
int main(){

    //  int removeElement(vector<int>& nums, int val) {
    vector<int> nums{1,2,2,2,2,2,3,4,5,2,2,2,2};
    int val=2;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val) {
                nums[j]=nums[i];
                j=j+1;
            }
        }
        // return j;
    // }

    // vector<int>::iterator it=nums.begin();
    //  for(int i=0;i<nums.size();i++){
    //         if(nums[i]==val){
    //             nums.erase(it+i);
    //         }
    //         // it=it++;
    //         // ptr++;
    //     }
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl<<j;
    return 0;
}