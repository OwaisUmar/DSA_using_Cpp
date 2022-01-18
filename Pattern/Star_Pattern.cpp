#include<iostream>
using namespace std;

int main()
{
    int i, j, n=4, k=0;
    for(i=1; i<=n; i++)
        {
            for(j=1; j<=n-i; j++)
                cout<<"  ";
            
            for(j=1; j<=i+k; j++)

                    cout<<"* ";  
            k+=1;
            cout<<endl;
        }
    k=n;
    for(i=n; i>=1; i--)
        {
            for(j=1; j<=n-i; j++)
                cout<<"  ";
            k-=1;
            for(j=1; j<=i+k; j++)
                cout<<"* ";  
            
            cout<<endl;
        }
    
    
    return 0;
}