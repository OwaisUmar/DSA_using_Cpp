#include<iostream>
using namespace std;

void sieveSPF(int n)
{
    int spf[100];   //Smallest prime factor
    for(int i=2; i<=n; i++)
    {
        spf[i]=i;
    }
    for(int i=2; i<=n; i++)
        if(spf[i]==i)
            for(int j=i*i; j<=n; j+=i)
                spf[j]=i;
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n/=spf[n];
    }
    
}

int main()
{
    int n;
    cout<<"Prime factor of: ";
    cin>>n;
    sieveSPF(n);
    return 0;
}