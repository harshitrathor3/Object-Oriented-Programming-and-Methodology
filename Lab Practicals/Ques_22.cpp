#include<iostream>
#include<thread>
using namespace std;

void fun1(){
    for (int i=0; i<10; i++)
        cout<<"Hello"<<endl;
}

void fun2(){
    cout<<endl;
}

int main(){
    thread t1(fun1);
    thread t2(fun2);
    t1.join();
    t2.join();
    cout<<t1.get_id();
    cout<<t2.get_id();
    for (int i=0; i<10; i++){
        cout<<"Bye.."<<endl;
    }
}