#include<iostream>
using namespace std;

class Test{
    public:
        int x, y;

        Test(){
            cout<<"Enter x and y : ";
            cin>>x>>y;
        }

        void Sum(){
            cout<<"Sum is "<<x+y<<endl;
            Sub();
        }

        void Sub(){
            cout<<"Substraction is "<<x-y<<endl;
        }

};

int main(){
    Test t;
    t.Sum();
}