#include<iostream>
using namespace std;

class A{
    public:
        double fun(int a, int b){
            return a/b;
        }

        double fun(double a, double b){
            return a*b;
        }
};

int main(){
    A obj;
    cout<<obj.fun(20, 10)<<endl;
    cout<<obj.fun(12.34, 56.90)<<endl;
}