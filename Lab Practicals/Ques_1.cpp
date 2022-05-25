#include<iostream>
using namespace std;

class Sum{
    public:
        int n;
        Sum(){
            cout<<"Enter n : ";
            cin>>n;
        }

        void calc(){
            cout<<"Sum is "<<n*(n+1)/2<<endl;
        }
};

int main(){
    Sum s;
    s.calc();
}