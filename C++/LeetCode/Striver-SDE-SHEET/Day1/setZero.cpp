    
#include<iostream>
#include<vector>
using namespace std;
    void setZeroes(vector<vector<int>>& matrix) {
        int sizeOfrow=matrix.size();//size of row
        int sizeOfcol=matrix[0].size();//size of col
                    
        bool rowZeros[sizeOfrow];
        bool colZeros[sizeOfcol]; 
        for(int i=0;i<sizeOfrow;i++) {rowZeros[i]=false;}
        for(int i=0;i<sizeOfcol;i++){ colZeros[i]=false;}
        
        for(int i=0;i<sizeOfrow;i++){
            for(int j=0;j<sizeOfcol;j++){
                if(matrix[i][j]==0){
                    rowZeros[i]=true;
                    colZeros[j]=true;
                }
            }
        }
        
        for(int i=0;i<sizeOfrow;i++){
            for(int j=0;j<sizeOfcol;j++){
                if(rowZeros[i] or colZeros[j]){
                    matrix[i][j]=0;
                    matrix[i][j]=0;
                }
            }
        }
        
    }

    int main(){
        // [0,1,2,0],[3,4,5,2],[1,3,1,5]        
        vector<vector<int>> matrix{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
        setZeroes(matrix);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
        return 0;
    }