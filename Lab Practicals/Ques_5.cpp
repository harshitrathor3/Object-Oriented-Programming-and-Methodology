//Demonstrate concept of encaptulation

#include<iostream>
using namespace std;

class Test{
    public:
        // int x;
        int x = 100;

        int fun(){
            return x;
        }
};

int main(){
    Test t1;
    cout<<t1.fun()<<endl;
}