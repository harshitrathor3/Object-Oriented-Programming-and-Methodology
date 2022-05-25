//Implement concept of pure virtual function

#include<iostream>
using namespace std;

class Base{
    public:
        virtual void fun(){
            cout<<"Base's fun.."<<endl;
        }
};

class Sub:public Base{
    public:
        void fun(){
            cout<<"Derived's fun.."<<endl;
        }
};

int main(){
    Base *p = new Sub();
    p->fun();
}