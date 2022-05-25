#include<iostream>
using namespace std;

class Student{
    public:

        int roll;
        Student(){
            roll = 100;
        }
               
        Student(int x){
            roll = x;
        }
        
};

class Box{
    public:
        int l, b, h;
        
        Box(){
            l = 1; b = 1; h = 1; 
        }

        Box(int ln, int br=1, int hi=1){
            l = ln; b = br; h = hi;
        }
};


int main(){
    
    Box b1, b2(10, 20, 30), b3(40);
    Box b;
    cout<<b1.l<<endl<<b1.b<<endl<<b1.h<<endl;
    cout<<endl;
    cout<<b2.l<<endl<<b2.b<<endl<<b2.h<<endl;
    cout<<endl;
    cout<<b3.l<<endl<<b3.b<<endl<<b3.h<<endl;
    cout<<endl;
    cout<<b.l<<endl<<b.b<<endl<<b.h<<endl;
    
    
    
    // Student abc(101), a(102);
    // cout<<"Roll no abc "<<abc.roll<<endl;
    // Student abcc;
    // cout<<"Roll no abcc "<<abcc.roll<<endl;
    // cout<<"Roll no a "<<a.roll<<endl;

}