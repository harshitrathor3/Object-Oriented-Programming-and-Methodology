#include<iostream>
using namespace std;

void callbyreference(int &x, int &y){
    int z;
    z = x;
    x = y;
    y = z;
    cout<<"In Function "<<" x = "<<x<<" y = "<<y<<endl<<endl;

}

int main(){
    int a = 5, b = 6;
    cout<<"Before Swapping "<<" a = "<<a<<" b = "<<b<<endl<<endl;
    callbyreference(a, b);
    cout<<"After Swapping "<<" a = "<<a<<" b = "<<b<<endl<<endl;

}