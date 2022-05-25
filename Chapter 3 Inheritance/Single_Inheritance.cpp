#include<iostream>
using namespace std;

class A{
    public:
        int x, y;
        A(){
            cout<<"Enter two nos : ";
            cin>>x>>y;
        }
};

class B:public A{
    public:
        // int res;
        B(){
            cout<<"B's constructor called"<<endl;
        }
        int res = x+y;

        void result(){
            cout<<"Result : "<<res<<endl;
        }

};

int main(){
    B b;
    b.result();
}