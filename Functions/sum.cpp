#include<iostream>
using namespace std;

int sum(int x, int y){
    int r;
    r = x + y;
    return r;
}

int mul(int x, int y){
    return x*y;
}

int main(){
    cout<<sum(10,20)<<endl;
    cout<<"Enter two nos"<<endl;
    int a, b;
    cin>>a>>b;
    int r;
    r = sum(a,b);
    cout<<r<<endl;
    cout<<mul(a, b)<<endl;
    return 0;
}