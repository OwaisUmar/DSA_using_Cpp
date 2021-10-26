#include<iostream>
using namespace std;

int main()
{
    int n=4;
    for(int i=1; i<=n; i++)
        {
        for(int j=1; j<=n*2; j++)
            {
            if(j<=i || j>=n*2-i+1)
                cout<<"* ";
            else
                cout<<"  ";
            }
        cout<<"\n";
        }
    for(int i=n; i>=1; i--)
        {
        for(int j=1; j<=n*2; j++)
            {
            if(j<=i || j>=n*2-i+1)
                cout<<"* ";
            else
                cout<<"  ";
            }
        cout<<"\n";
        }
    return 0;
}