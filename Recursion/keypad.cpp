#include<iostream>
using namespace std;

string keypad[]={"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadCombination(string str, string ans)
{
    if(str=="")
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    string code=keypad[ch-'0'];
    for(int i=0; i<code.length(); i++)
        keypadCombination(ros, ans+code[i]);    
}

int main()
{
    string str="23";
    keypadCombination(str,"");
    return 0;
}