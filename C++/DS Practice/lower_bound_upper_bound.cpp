// how to find lower and upper bound of element
#include<iostream>
#include<vector>
using namespace std;
 // namespace std;
 int main(){
    vector<int> arr={1,2,3,4,7,7,7,8};
    int key=7;
    if (arr.size() == 0){
        cout<<"Lower and Upper bound unable to find";
    }else{
        int first=lower_bound(arr.begin(),arr.end(),key) - arr.begin();
        int last=lower_bound(arr.begin(),arr.end(),key) - arr.end();
        cout<<first<<" "<<last;
    }
 }

//  class Solution {
// public:
//     vector<int> searchRange(vector<int>& v, int target) {
//             if (v.size() == 0) return {-1, -1};
//             int l = lower_bound(v.begin(), v.end(), target) - v.begin();
//             int u = upper_bound(v.begin(), v.end(), target) - v.begin();
//             if (l >= v.size() || v[l] != target) return {-1, -1};
//             else return {l, u - 1};
//     }
// };
