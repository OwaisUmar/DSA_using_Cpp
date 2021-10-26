#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n, s;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the sum to be found:   ";
    cin>>s;
    int st=0, en=0, sum=0;
    while(en<n && sum+a[en]<=s)
        {
            sum+=a[en];
            en++;
        }
    if(sum==s)
    {
        cout<<st+1<<" "<<en;
        return 0;
    }
    while(en<n)
    {
        sum+=a[en];
        while(sum>s)
        {
            sum-=a[st];
            st++;
        }
        if(sum==s)
            break;
        en++;
    }
    cout<<st+1<<" "<<en+1; 
    return 0;
}