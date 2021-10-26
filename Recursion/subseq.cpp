#include<iostream>
using namespace std;

void subseq(string str, string ans)
{
    if(str=="")
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    int code=ch;
    string ros=str.substr(1);
    subseq(ros, ans);
    subseq(ros, ans+ch);
    subseq(ros, ans+to_string(code));
}

int main()
{
    string str="AB";
    subseq(str,"");
    return 0;
}