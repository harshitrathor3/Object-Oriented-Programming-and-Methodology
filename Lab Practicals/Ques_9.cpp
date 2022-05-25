#include<iostream>
using namespace std;

int x = 100;

class Test{
    public:
        int x = 10;
        int y = ::x;

};

int main(){
    Test t;
    cout<<"x = "<<t.x<<" y = "<<t.y<<endl;
}