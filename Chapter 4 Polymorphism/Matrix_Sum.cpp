#include<iostream>
using namespace std;

class Matrix{
    public:
        int arr[3][3];

        void insert(int x, int y){
            for (int i=0; i<x; i++)
                for (int j=0; j<y; j++)
                    cin>>arr[i][j];
        }

        void print(int x, int y){
            for (int i=0; i<x; i++){
                for (int j=0; j<y; j++)
                    cout<<arr[i][j]<<" ";
                cout<<endl;
            }
        }

        Matrix operator + (Matrix m){
            Matrix temp;
            for (int i=0; i<3; i++)
                for (int j=0; j<3; j++)
                    temp.arr[i][j] = arr[i][j] + m.arr[i][j];
            return temp;
        }
};

int main(){
    Matrix m1, m2, m3;
    int x, y, t;
    cin>>t;
    while (t--){
        cin>>x>>y;
        m1.insert(x, y);
        m2.insert(x, y);
        m3 = m1 + m2;
        m3.print(x, y);
    }
}