#include<iostream>
#include<cmath>
using namespace std;

class Prime{
    public:
        bool ans = true;
        Prime(int n){
            if (n%2==0) ans = false;
            else{
                for (int i=3; i<=sqrt(n); i+=2){
                    if (n%i==0){ 
                        ans = false;
                        break;
                    }
                }
            }
            if (ans==true) cout<<"Yes its Prime"<<endl;
            else cout<<"No its not a Prime"<<endl;
        }
};

int main(){
    Prime p(97);
}