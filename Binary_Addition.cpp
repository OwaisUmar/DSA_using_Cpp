#include<bits/stdc++.h>
using namespace std;

int binadd(int x, int y)
{
    int i=0, carry=0, a[50], sum=0;
    while(x && y)
    {
        if(x%10==0 && y%10==0)
        {
            a[i++]=carry;
            carry=0;
        }
        else if((x%2==0 && y%2==1)||(x%2==1 && y%2==0))
        {
            if(carry==0)
                a[i++]=1;
            else
            {
                a[i++]=0;
                carry=1;
            }      
        }
        else
        {
            a[i++]=carry;
            carry=1;
        }
        x/=10;
        y/=10;
    }
    while(x>0)
    {
        if(carry==1)
        {
            if(x%10==1)
            {
                a[i++]=0;
                carry=1;
            }
            else
            {
                a[i++]=1;
                carry=0;
            }
        }
        else
            a[i++]=x%10;
        x/=10;
    }
        while(y>0)
    {
        if(carry==1)
        {
            if(y%10==1)
            {
                a[i++]=0;
                carry=1;
            }
            else
            {
                a[i++]=1;
                carry=0;
            }
        }
        else
            a[i++]=y%10;
        y/=10;
    }
    if(carry==1)
        a[i++]=1;
    for(--i;i>=0;i--)
        sum=sum*10+a[i];
    return sum;
}

int main()
{
    int a, b;
    cout<<"Enter two decimal nos.:  ";
    cin>>a>>b;
    cout<<binadd(a,b);
    return 0;
}
