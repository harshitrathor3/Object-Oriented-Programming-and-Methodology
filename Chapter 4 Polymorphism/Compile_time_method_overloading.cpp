#include<iostream>
using namespace std;

class A{
    public:
        
        void fun(){
            cout<<1<<endl;
        }

        void fun(int x){
            cout<<x<<endl;
        }

        void fun(float x, float y){
            cout<<x+y<<endl;
        }

        void fun(string s, char c){
            cout<<s<<endl;
            cout<<c<<endl;
        }

        void fun(char c, string s){
            cout<<s<<endl;
            cout<<c<<endl;
        }


};

int main(){
    A obj;
    obj.fun();
    obj.fun(100);
    obj.fun(10.3, 13.2);
    obj.fun("s for string", 'c');
    obj.fun('s', "c for char");
}