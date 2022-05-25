#include<iostream>
using namespace std;

class New{
    public:
        int x;
        void msg(){
            cout<<"Hello, World!!!"<<endl;
        }
};

int main(){
    New n, n1, n2;
    n.x = 15;
    cout<<n.x<<endl;
    n.msg();
    n1.x = 150;
    cout<<n1.x<<endl;
    n1.msg();
}