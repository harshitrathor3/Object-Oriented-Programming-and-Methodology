#include<iostream>
using namespace std;

class CS{
    public:
        int age;
        void helo(){
            cout<<"Hello"<<endl;
        }

        void fun(int x){
            age = x;
        }

        void print(){
            cout<<"Age : "<<age<<endl;
        }
};

int main(){
    CS abcd, xyz;
    abcd.helo();
    abcd.fun(15);
    abcd.print();
    cout<<endl<<endl;
    xyz.age = 15;
    xyz.print();
    cout<<"Age of xyz = "<<xyz.age<<endl;

    cout<<endl<<endl;
    abcd.print();
    xyz.fun(20);
    xyz.print();
}