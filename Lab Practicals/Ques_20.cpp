#include<iostream>
using namespace std;

class Test{
    private:
        int x = 100;
    friend class A;
};

class A{
    public:
        void fun(Test t){
            cout<<t.x<<endl;
        }
};

int main(){
    Test t;
    A a;
    a.fun(t);
}