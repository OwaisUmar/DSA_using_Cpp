#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();    
    char sent[n+1];
    cin.getline(sent, n);
    cin.ignore();

    cout<<sent<<endl;

    int currlen=0, maxlen=INT_MIN;
    int st=0, maxst=0;
    
    
    for(int i=0; i<n; i++)
    {
        if(sent[i]==' ' || sent[i]=='\0')
            {
                if(currlen>maxlen)
                {
                    maxlen=currlen;
                    maxst=st;
                }
                currlen=0;
                st=i+1;
            }
        else
            currlen++;
        cout<<sent[i]<<" ";        
    }   
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++)
        cout<<sent[maxst+i];
    return 0;
}