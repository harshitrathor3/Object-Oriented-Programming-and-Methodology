#include<iostream>
using namespace std;

class A{
    public:
      int x;
      A(){
          cout<<"Enter x : ";
          cin>>x;
      }

      ~A(){
          cout<<"A's Destructor"<<endl;
      }
};

class B:public A{
    public:
      int y;
      B(){
          cout<<"Enter y : ";
          cin>>y;
      }

      ~B(){
          cout<<"B's Destructor"<<endl;
      }
};

class C:public B{
    public:
      int z;
      C(){
          cout<<"Enter z : ";
          cin>>z;
      }

      ~C(){
          cout<<"Sum is : "<<x+y+z<<endl;
      }
};

int main(){
    C c;
}