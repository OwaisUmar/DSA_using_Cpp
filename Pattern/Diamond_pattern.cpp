#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=n; i>=1; i--)
        {
            for(j=1; j<(n*2); j++)
                {
                    if(j<i)
                        cout<<" ";
                    else if((i+j)<=(2*n))
                        cout<<"*";
                }
            cout<<endl;
        }
    for(i=1; i<=n; i++)
        {
            for(j=1; j<(n*2); j++)
                {
                    if(i>j)
                        cout<<" ";
                    else if((i+j)<=(2*n))
                        cout<<"*";
                }
            cout<<endl;
        }
    return 0;
}