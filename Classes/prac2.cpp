#include<iostream>
using namespace std;

class C1{
    public:
        double marks;

        void setMarks(){
            cout<<"Enter Marks : "<<endl;
            cin>>marks;
        }

        void showPer(){
            cout<<"Your Percentage is : "<<marks*100/500<<endl;
        }
};

class C2{
    public:
        char grd;
        double marks;

        void setMarks(){
            cout<<"Enter Marks : "<<endl;
            cin>>marks;
        }

        char showGrade(){
            if (marks>=80)
                return 'A';
            else if (marks>=60)
                return 'B';
            else
                return 'C';
        }
};

int main(){

    C1 c1;
    c1.setMarks();
    c1.showPer();

    C2 c2;
    c2.setMarks();
    // c2.marks=100;
    cout<<c2.showGrade()<<endl;
}