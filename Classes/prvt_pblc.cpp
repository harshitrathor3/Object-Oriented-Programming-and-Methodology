#include<iostream>
using namespace std;

class CS{
    private: 
        int a, b;
    
    public:
        void setData(int x, int y){
            a = x;
            // this.a = x;
            b = y;
        }

        // void setData1(int a, int b){
        //     a = a;
        //     b = b;
        // }

        void getData(){
            cout<<" a = "<<a<<endl;
            cout<<" b = "<<b<<endl;
        }
};


int main(){
    CS c1;
    c1.setData(10, 15);
    // c1.setData1(10, 220);
    c1.getData();
}