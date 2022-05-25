#include<iostream>
using namespace std;

class Test{
    
    // public:
    //     Test(){
    //        cout<<"Public can be called.."<<endl;
    //     }
    
    private:
        Test(){
            cout<<"Private constructor can't be called..";
        }
};

int main(){
    Test t;
}