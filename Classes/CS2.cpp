#include<iostream>
using namespace std;

class CS2{
    public:
    void hello(){                      //member func of CS 2 class
        cout<<"Hello World"<<endl;
    }

    void hii(){
        cout<<"";
    }
};

int main(){
    //classname objectname
    CS2 c;
    //func calling : objName.funcName
    c.hello();
    c.hello();
    c.hello();
}