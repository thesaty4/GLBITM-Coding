#include<iostream>
#include<vector>
using namespace std;
main(){
    vector<int> intVct;// vector can grow and shrik
    intVct.push_back(3);
    intVct.push_back(4);
    intVct.push_back(5);
    cout<<intVct.max_size()<<endl;
    cout<<intVct.size()<<endl;
    cout<<intVct.capacity()<<endl;
    cout<<intVct.front()<<endl;

    vector<string> strVector;
    strVector.push_back("Thi is an string");
    cout<<strVector.front();

    vector<int> newVect(3,0);
    // iteration
    for(int i:newVect){
        cout<<i;
    }

    // vector<string> newStr('default');
    // i=0;
    // while(i<newVect.size()){
    //     cout<<newVect[i];
    //     i++;
    // }
    return 0;
}