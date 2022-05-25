#include<iostream>
using namespace std;

class Test{
    public:
        int x;
        Test(){
            x = 1;
        }
        Test(int x){
            this->x = x;
        }
        Test(int x, int y){
            this->x = x+y;
        }
};

int main(){
    Test t, t1(100), t2(10, 20);
    cout<<t.x<<endl;
    cout<<t1.x<<endl;
    cout<<t2.x<<endl;
}