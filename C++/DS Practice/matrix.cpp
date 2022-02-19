#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    
    }
};

int main(){
    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=5;
    Solution obj;
    cout<<obj.searchMatrix(matrix,target);
    return 0; 
}