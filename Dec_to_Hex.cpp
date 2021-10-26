#include<bits/stdc++.h>
using namespace std;

string dectohex(int n)
{
    int d, i=0, a[50]; 
    string hex="";
    while(n)
    {
    	d=n%16;
    	n/=16;
    	a[i++]=d;
	}
	for(--i; i>=0; i--)
	{
		if(a[i]<=9)
			hex=hex+ to_string(a[i]);
		else
		{
			char c = a[i]+'A'-10;
			hex.push_back(c);
		}
	}
	return hex;
}

int main()
{
    int n;
    cout<<"Enter a decimal no.:  ";
    cin>>n;
    cout<<dectohex(n);
    return 0;
}
