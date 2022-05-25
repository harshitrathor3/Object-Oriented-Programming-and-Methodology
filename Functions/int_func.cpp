#include<iostream>
using namespace std;

int func(){
    return 5;
}

int main(){
    cout<<"Hello, World!"<<endl;
    cout<<func()<<endl;
    int x = func();
    cout<<x;
    return 0;
}