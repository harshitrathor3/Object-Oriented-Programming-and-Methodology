#include<iostream>
using namespace std;

class Student{
    public:
        string name;

        Student(){
            name = "Unknown";
        }

        Student(string s){
            name = s;
        }
        string fun(){
            return name;
        }
};

int main(){
    Student s, s1("Ajay");
    cout<<s.fun()<<endl;
    cout<<s1.fun()<<endl;

}