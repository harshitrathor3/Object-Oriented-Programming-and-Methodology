#include<iostream>
using namespace std;

class Student{
    public:
        int rolno, att;
        float marks;
        string name;

        void setdata(){
            cout<<"Enter Name"<<endl;
            cin>>name;
            cout<<"Enter rolno"<<endl;
            cin>>rolno;
            cout<<"Enter att"<<endl;
            cin>>att;
            cout<<"Enter marks"<<endl;
            cin>>marks;
            cout<<endl;
        }

        void show(){
            cout<<"Name : "<<name<<endl;
            cout<<"rolno "<<rolno<<endl;
            cout<<"att "<<att<<endl;
            cout<<"marks "<<marks<<endl;
            cout<<endl<<endl;
        }
};

int main(){
    Student s, s1;
    s.setdata();
    s.show();

    s1.setdata();
    s1.show();
}