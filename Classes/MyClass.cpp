#include<iostream>
using namespace std;

class MyClass{
    public:
        int x;
        void MyFunc();
};

void MyClass::MyFunc(){
    cout<<endl;
    cout<<"Function definition outside class"<<endl;
    cout<<endl;
}

int main(){
    MyClass c1;
    c1.MyFunc();
}