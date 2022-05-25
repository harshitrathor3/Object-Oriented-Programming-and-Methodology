#include<iostream>
using namespace std;
class matrix
{
    public:
    int arr[3][3];
    void insert ()
    {
        for (int i = 0; i <3; i++)
        {
            for (int j = 0; j <3; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        
    }
    void print()
    {
        for (int i = 0; i <3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    }
    matrix operator + (matrix m)
    {
         matrix temp;
         for (int i = 0; i <3; i++)
         {
            for (int j = 0; j <3; j++)
            {
                temp.arr[i][j]=arr[i][j]+m.arr[i][j];
            }
            
         }
		 return temp;
    }
};
int main()
{
    matrix m1,m2,m3;
    m1.insert();
    m2.insert();
    m3=m1.operator+(m2);
	m3.print();
}