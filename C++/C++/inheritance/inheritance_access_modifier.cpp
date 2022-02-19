#include<iostream>
using namespace std;
class mybase{
    private:
        int x=2;
    protected:
        int y=3;
    public:
        int z=4;

        void Sumsquare(){
            cout<<endl<<"Sum of suqare : "<<(x*x)+(y*y)+(z*z);
        }
};

class myderived1:private mybase{
    //Privat member will not inherited
    // protected member will be inherited as private
    // public memeber will be inheriated as private
};

class myderived2:protected mybase{
    //Privat member will not inherited
    // protected member will be inherited as protected
    // public memeber will be inheriated as protected
};

class myderived3:public mybase{
    //Privat member will not inherited
    // protected member will be inherited as protected
    // public memeber will be inheriated as public
};

int main(){
    // mybase obj;
    // obj.Sumsquare(); //Result

    myderived3 obj2;
    obj2.Sumsquare();
    return 0;
}