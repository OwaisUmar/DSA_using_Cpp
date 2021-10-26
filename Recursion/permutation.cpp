#include<iostream>
using namespace std;

void permutation(string str, string ans)
{
    if(str=="")
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<str.length(); i++)
    {
        char ch=str[i];
        string ros=str.substr(0,i)+str.substr(i+1);
        permutation(ros, ch+ans);
    }  
}

int main()
{
    string str="ABC";
    permutation(str,"");
    return 0;
}
