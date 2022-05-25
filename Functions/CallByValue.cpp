#include<iostream>
using namespace std;

void callbyvalue(int x, int y){
    int z;
    z = x;
    x = y;
    y = z;
    cout<<"In Function "<<" x = "<<x<<" y = "<<y<<endl<<endl;

}

int main(){
    int a = 5, b = 6;
    cout<<"Before Swapping "<<" a = "<<a<<" b = "<<b<<endl<<endl;
    callbyvalue(a, b);
    cout<<"After Swapping "<<" a = "<<a<<" b = "<<b<<endl<<endl;

}