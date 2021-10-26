#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int mat[m][n], k;
    for(int i=0; i<m; i++)
      for(int j=0; j<n; j++)
        cin>>mat[i][j];
    cout<<"Enter target";
    cin>>k;
    int rs=0, cs=n-1;
    while(rs<m && cs>=0)
        {
            if(mat[rs][cs]==k)
                {
                    cout<<rs<<" "<<cs;
                    return 0;
                }
            if(mat[rs][cs]<k)
                rs++;
            else
                cs--;
        }
    cout<<-1;
    return 0;
}