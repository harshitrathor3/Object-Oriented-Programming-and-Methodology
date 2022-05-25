#include<iostream>
using namespace std;

class A{
    public:
        int x=1;
};

class B{
    public:
        int y=10;
};

class C:public A, public B{
    public:
        int z=100;
};

int main(){
    C obj;
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    cout<<obj.z<<endl;
}