#include<iostream>
using namespace std;

//By Default Compiler make 2 constructor one is default and another is copy constructor
//if we dont make any constructor

class Box{
    public:
    
        int l, b, h;

        Box(){
            l = 1; b = 1; h = 1;
        }

        Box(int ln, int br, int hi){
            l = ln; b = br; h = hi;
        }

        Box(Box &bx){
            l = bx.l;
            b = bx.b;
            h = bx.h;
        }

};

int main(){
    Box b1;
    Box b2(10, 20, 30);
    Box b3(b2);
    Box b4 = b1;
    cout<<b1.l<<endl<<b1.b<<endl<<b1.h<<endl;
    cout<<b2.l<<endl<<b2.b<<endl<<b2.h<<endl;
    cout<<b3.l<<endl<<b3.b<<endl<<b3.h<<endl;
    cout<<b4.l<<endl<<b4.b<<endl<<b4.h<<endl;
    
}