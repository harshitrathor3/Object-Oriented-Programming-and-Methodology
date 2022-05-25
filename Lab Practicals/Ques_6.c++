#include<iostream>
#include<cmath>
using namespace std;

class Test{
    public:
        int r;

        double Circum(){
            return 2*M_PI*r;
        }

        double Area(){
            return M_PI*r*r;
        }

};

int main(){
    Test t;
    t.r = 5;
    cout<<"Circumference : "<<t.Circum()<<endl;
    cout<<"Area : "<<t.Area()<<endl;
}