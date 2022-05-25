#include<iostream>
using namespace std;

class Test{
    public:
        int n;
        Test(){
            cout<<"Enter a no : ";
            cin>>n;
        }

        int cube();
};

int Test::cube(){
    return n*n*n;
}

int main(){
    Test t;
    cout<<"Cube of no is : "<<t.cube()<<endl;
}