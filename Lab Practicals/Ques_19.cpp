#include<iostream>
using namespace std;

class Test{
    private:
        int x=10;

        friend void fun(Test);
};

void fun(Test t){
    cout<<t.x<<endl;
}

int main(){
    Test t;
    fun(t);
}