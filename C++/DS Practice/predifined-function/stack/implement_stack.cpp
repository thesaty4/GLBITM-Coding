#include<iostream>
#include<vector>
using namespace std;
class Stack{
    private:
        int size;
        vector<int> stack;
    public:
    Stack(int s){
        size=s;
    }

   void push();
   void pop();
   void top();
   void display();
   void extand();
};

void Stack::push(){
    if(size==stack.size()){
        cout<<"Stack is full ! "<<endl;
    }else{
        int element;cout<<"Enter element : ";cin>>element;
        stack.push_back(element);
    }
}

void Stack::pop(){
    if(stack.size()==0) cout<<"Stack is Empty ! "<<endl;
    else{ 
        cout<<"Popped Element is : "<<stack.back()<<endl;
        stack.pop_back();
    }
}

void Stack::top(){
    cout<<"Top of Stack is : "<<stack.back()<<endl;
}

void Stack::display(){
    if(stack.size()==0) cout<<"Stack is empty";
    else{
        vector<int>::iterator it;
        for(int i=stack.size()-1;i>=0;i--) cout<<"| "<<stack[i]<<" | "<<endl;
        cout<<" ---- "<<endl;
    }
}

void Stack::extand(){
    int t;
    cout<<"Enter New Size of Stack : ";cin>>t;
    if(t<size) cout<<"Opps ! Size is Less than Previous size "<<endl;
    else{cout<<endl<<"Size Extended "<<size<<" To "<<t<<endl;
    size=t;}
}


int option(){
    cout<<"1. Push "<<endl;
    cout<<"2. Pop "<<endl;
    cout<<"3. Top "<<endl;
    cout<<"4. Display "<<endl;
    cout<<"5. Extand Size "<<endl;
    cout<<"6. Exit "<<endl;
    int opt;cout<<"Please do selection option >> ";cin>>opt;
    return opt;
}

int main(){
    int size,opt;
    cout<<"Enter the size of stack : ";
    cin>>size;
    Stack* stack = new Stack(size);
    
    do{
        opt=option();
            switch(opt){
                case 1: stack->push();break;
                case 2: stack->pop(); break;;
                case 3: stack->top();break;
                case 4: stack->display();break;
                case 5: stack->extand();break;
                case 6: cout<<"Thank you ! You are exiting successfully ! "<<endl;break;
                default:cout<<"Invalid input "<<endl;break;
            }

    }while(opt!=6);
    
    // cout<<s.back();
    // cout<<s.front();
    return 0;
}