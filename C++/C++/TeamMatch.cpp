/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
#include<limits.h>
#include<array>
using namespace std;
#define PLAYERS 2
class matchRecord
{
private:
  int wickets[2], catches[2], runs[2],i;
  
public:
  int playerCode[2];
  int total_point[2];
  void insert(int team);
  int* display(int team,int *max);
  
  ~matchRecord ()
  {
    // 
    cout <<endl<< "Object Distroyed..." << endl;
  }
};

void matchRecord::insert (int team)
  {
    for(i=0;i<PLAYERS;i++){
        cout<<"[ T"<<team<<" ] Player "<<i+1<<" Deatils : "<<endl;
        cout<<"| Player Id : "; cin>>playerCode[i];
        cout<<"| Catches : "; cin>>catches[i];
        cout<<"| Runs : "; cin>>runs[i];
        cout<<"| Wickets : "; cin>>wickets[i];
        cout<<endl<<"|";
    }
  }
  
int* matchRecord::display (int team,int *max)
  {
      for(i=0;i<PLAYERS;i++){
        int points = ((runs[i]/25)*5)+(wickets[i]*5)+(catches[i]*5);
        total_point[i]=points;
        cout<<"|   "<<playerCode[i]<<"\t  T"<<team<<"\t  "<<wickets[i]<<"\t   "<<catches[i]<<"\t "<<runs[i]<<"\t "<<total_point[i]<<"       |"<<endl;
      
        // check who is best point gainer from their team
        if(total_point[i]>max[2]){
            max[0]=team;           //Team Number
            max[1]=playerCode[i];   // Player Id
            max[2]=wickets[i];   // wickets
            max[3]=catches[i];   // total cates
            max[4]=runs[i];     // total runs
            max[5]=total_point[i];     //total max point
        }
      }
      
      return max;
  }

int main ()
{
    int num_of_team,j=0,wicket,catches,runs;
    char pid;
    cout<<endl<<"+-------------------------------------------------+"<<endl;
    cout<<"|\t \t MATCHES SUMMARY                  | "<<endl;
    cout<<"+-------------------------------------------------+"<<endl;
    cout<<"| Number of Team >> ";
    cin>>num_of_team;
    
    matchRecord obj[num_of_team]; //matchRecord obj[3] obj[0],obj[1],obj[2]
    for(int i=0;i<num_of_team;i++){
        cout<<endl<<"+-------------------------------------------------+"<<endl;
        cout<<"["<<i+1<<"]"<<"Team Record : "<<endl;
        cout<<"+-------------------------------------------------+"<<endl;
        obj[i].insert(i+1);
    }
    
    cout<<endl<<"|==================================================|"<<endl;
    cout<<"|                   SCORE BOARD                    |"<<endl;
    cout<<"|==================================================|"<<endl;
  
    cout<<"| Code | Team | Wicket | Catch | Runs | Points     |"<<endl;
    cout<<"+--------------------------------------------------+"<<endl;
    int max[]={0,0,0,0,0,INT_MIN};
    int* temp;
    for(int i=0;i<num_of_team;i++){
        temp=obj[i].display(i+1,max);
        //check max point gainer from teams
        if(max[5]>temp[5]){
            max[0]=temp[0]; //team
            max[1]=temp[1]; //playercode
            max[2]=temp[2]; //wicket
            max[3]=temp[3];  //Catch 
            max[4]=temp[4]; //runs
            max[5]=temp[5]; //point
        }
    }
  
cout<<"+--------------------------------------------------+"<<endl;
cout<<"| Man of the Match from Team : "<<max[0]<<endl;
cout<<"| Man of the Match : "<<max[1]<<endl;
cout<<"| Highest Point is : "<<max[5]<<endl;
cout<<"|"<<endl;;
cout<<"| Catechs of Player : "<<max[3]<<endl;
cout<<"| Wickets Player is : "<<max[2]<<endl;
cout<<"| Total Run by this user : "<<max[4]<<endl;
cout<<"+--------------------------------------------------+";
  return 0;
}


