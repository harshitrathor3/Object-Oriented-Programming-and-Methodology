#include<iostream>
using namespace std;

int main(){
    double bal = 100;
    double amt;
    cout<<"Enter amount : ";
    cin>>amt;

    try{
        if (amt>bal){
            throw amt;
        }
        bal-=amt;
        cout<<"Successful"<<endl;
    }
    catch(double amt){
        cout<<"Unsuccesful due to short balance.."<<endl;
    }
}