// 3. Write a program for addition of two matrices of the same dimensions.

#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter rows and column of matrix:  ";
    cin>>m>>n;
    int mat1[m][n], mat2[m][n];
    cout<<"Enter elements for Matrix 1:\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>mat1[i][j];
    cout<<"Enter elements for Matrix 2:\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>mat2[i][j];
    
    int res[m][n];      //resultant matrix
    //Adding matrices
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            res[i][j]=mat1[i][j]+mat2[i][j];
    
    //Printing resultant matrix
    cout<<"Addition of matrices:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}