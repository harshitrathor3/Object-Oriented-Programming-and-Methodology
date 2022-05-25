#include<iostream>
using namespace std;

class Comp{
    public:
        int r, i;

        void setValues(int x, int y){
            r = x; i = y;
        }

        void print(){
            cout<<"Real : "<<r<<endl;
            cout<<"Imagnery : "<<i<<endl;
        }

        Comp operator + (Comp c){
            Comp temp;
            temp.r = r + c.r;
            temp.i = i + c.i;
            return temp;
        }
};

int main(){
    Comp c1, c2, c3;
    c1.setValues(10, 100);
    c2.setValues(20, 200);
    c3 = c1.operator+(c2);
    c3.print();
}