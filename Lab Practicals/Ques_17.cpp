#include<iostream>
using namespace std;

class A{
    public:
        virtual int fun(int x, int y){
            return x+y;
        }
};

class B:public A{
    public:
        double fun(double x, double y){
            return x+y;
        }
};

int main(){
    B obj;
    cout<<obj.fun(10, 20)<<endl;
    cout<<obj.fun(1.23, 3.98)<<endl;
}