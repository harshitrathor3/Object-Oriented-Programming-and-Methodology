#include<iostream>
using namespace std;

int fun(int x=1, int y=2, int z=3){
    return x+y+z;
}

int main(){
    cout<<fun()<<endl;
}