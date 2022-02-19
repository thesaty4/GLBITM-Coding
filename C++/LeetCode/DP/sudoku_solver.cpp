#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
private:
    bool is_possible(vector<vector<char>>& board,int rowIndex,int colIndex,int value){
    int row=board[0].size();
    int col=board.size();  
    for(int i=0;i<row;i++){
            if(to_string(board[rowIndex][i] )== to_string(value)){
                    return false;
            }
      }  
    
      for(int i=0;i<col;i++){
          if(to_string(board[i][colIndex]) == to_string(value)){
              return false;
          }
      }
        
        return true;
    }
    
public:
    void solveSudoku(vector<vector<char>>& board) {
        
        int row=board[0].size();
        int col=board.size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='.'){
                    for(int num=1;num<=9;num++){
                        if(is_possible(board,i,j,num)){
                            board[i][j]=(char) num;
                            break;
                        }
                    }
                }
            }
        }
    }
};

int main(){
    int n=1;
    char num=48;
    char a=n+num;

    cout<<a;
    
}