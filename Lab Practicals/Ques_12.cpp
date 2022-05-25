#include<iostream>
using namespace std;

class B{
    public:
        int sum;
};

class A{
    public:
        int x, y;
        A(){
            cout<<"Enter x and y : ";
            cin>>x>>y;
        }

        B fun(){
            B b;
            b.sum = x + y;
            return b;
        }
};



int main(){
    A a;
    B b;
    b = a.fun();
    cout<<b.sum<<endl;
}