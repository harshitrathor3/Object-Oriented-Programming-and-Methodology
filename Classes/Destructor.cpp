#include<iostream>
using namespace std;

class Test{
    public :

        int x;
        Test(){
            x = 100;
            cout<<"Constructor called"<<endl;
            cout<<"x = "<<x<<endl;
        }

        ~Test(){
            cout<<"Destructor called"<<endl;
        }
};

int main(){
    cout<<"Intilization"<<endl;
    Test t;
    cout<<"End1"<<endl;
    
    Test t1;
    cout<<"End2"<<endl;

}