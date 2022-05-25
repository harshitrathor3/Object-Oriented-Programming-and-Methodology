//Demonstrate concept of array of object

#include<iostream>
using namespace std;

class Test{
    public:
        int x;
        void f(){
            cout<<x<<endl;
        }
};

int main(){
    Test t1, t2, t3;
    Test arr[] = {t1, t2, t3};
    arr[0].x = 100;
    arr[0].f();
    arr[0].x = 10;
    arr[0].f();
    arr[0].x = 1;
    arr[0].f();
}