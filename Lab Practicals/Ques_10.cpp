#include<iostream>
using namespace std;

class Test{
    public:
        int x = 100;
        Test();
};

Test::Test(){
    cout<<x<<endl;
}

int main(){
    Test t;
}