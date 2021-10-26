#include<iostream>
using namespace std;

void dec(int n)
{
    if(n==1)
    {   
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
 
void inc(int n)
{   
    if(n==1)
    {   
        cout<<n<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    
}

int main()
{
    dec(5);
    cout<<endl;
    inc(5);
    return 0;

}