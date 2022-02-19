#include<iostream>
using namespace std;
class Number{
    private:
       int mat[4][3],i,j,sum=0;

    public:
        void InputNumber();
        int SumNumber();
        void Display();
        // void display();
};
void Number::InputNumber(){
    cout<<"\nEnter a elements of a matrix of 4X3 : "<<endl;
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
            cin>>mat[i][j];
}

int Number::SumNumber(){
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
            sum+=mat[i][j];
    return sum;
}

void Number::Display(){
    for(i=0;i<4;i++){
        for(j=0;j<3;j++)
            cout<<" "<<mat[i][j];
        cout<<endl;
    }
}
int main(){
    Number obj1[5];
    int s1[5];
    for(int i=0;i<5;i++){
        obj1[i].InputNumber();
        obj1[i].Display();
        s1[i]=obj1[i].SumNumber();
    }

    // if(s1[0]==s1[1])
    //     cout<<"\n Sum of two matrix is Equal";
    // else
    //     cout<<"\n SUm of two matrix is Not equal";

    // sorting 
    cout<<"Before Sorting : ";
    for(int i=0;i<5;i++){
        cout<<s1[i]<<" ";
    }
    for(int i=1;i<5;i++){
        int current = s1[i];
        int j=i-1;
        while(j>=0 && s1[j]>s1[j+1]){
            s1[j+1]=s1[j];
            j--;
        }
        s1[j+1]=current;
    }

    cout<<endl<<"After Sorting : ";
    for(int i=0;i<5;i++){
        cout<<s1[i]<<" ";
    }



        // if(obj1[0].SumNumber()==obj[])
return 0;
}