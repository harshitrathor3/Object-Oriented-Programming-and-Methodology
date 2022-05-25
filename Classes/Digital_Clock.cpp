#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int hr, min, sec;
    cout<<"Enter Time : ";
    cin>>hr>>min>>sec;
    
    while (true){
        Sleep(1000);
        sec++;
        if (sec==60){
            min++;
            sec = 0;
            if (min==60){
                hr++;
                min = 0;

                if (hr==24){
                    sec = 0;
                    min = 0;
                    hr = 0;
                }
            }
        }
        system("cls");
        cout<<"Time is : "<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
}