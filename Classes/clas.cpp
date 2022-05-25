#include<iostream>
using namespace std;

class CS2{
    public:
    float cgpa, att;
    int roll;
    
    void getinfo(){
        cout<<"Enter roll no"<<endl;
        cin>>roll;
        cout<<"Enter cgpa and attendence"<<endl;
        cin>>cgpa>>att;
    }

    void printinfo(){
        cout<<roll<<" "<<cgpa<<"  "<<att<<endl;
    }
    
};

int main(){
   CS2 c1;
   c1.getinfo();
   c1.printinfo();

}