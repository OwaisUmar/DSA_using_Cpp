#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> ans;

void permute(vector<int> &v, int index)
{
    if(index==v.size())
    {
        ans.push_back(v);
        return; 
    }
    for(int i=index; i<v.size(); i++)
    {
        if(i!=index and v[i]==v[index])
            continue;
        swap(v[i], v[index]);
        permute(v, index+1);
        swap(v[i], v[index]);
    }
}

int main()
{
    int n; 
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)
        cin>>i;
    permute(v, 0);
    for(auto i:ans)
    {
        cout<<endl;
        for(auto j:i)
            cout<<j;
       
    }
    return 0;
}
