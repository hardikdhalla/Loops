//Hardik Dhalla
//23070123058
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your choice: ";
    cin>>n;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}