#include<iostream>
using namespace std;

void substring(string str, string ans)
{
    if(str=="")
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    substring(ros, ans);
    substring(ros,ans+ch);
}

int main()
{
    string str="abc";
    substring(str,"");
    return 0;
}