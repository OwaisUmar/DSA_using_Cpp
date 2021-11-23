// R2:S2:3. WAP to display the greatest product of FOUR adjacent numbers in the
// same direction (up, down, left, right and four diagonals) for each element in a
// 20×20 matrix.
// Hint: The size of the output matrix is also 20*20. Find 8 products. Find the max of
// those 8 products and store in the output matrix. Do this for each element.
// Consider boundary cases.

#include<iostream>
using namespace std;
#define n 20

int main()
{
    int arr[n][n];
    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];

    int maxProduct=0, product;
    int resarr[n][n];
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if((j+3)<n)
            {
                product = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
                maxProduct=max(product, maxProduct);
            }
            if((i+3)<n)
            {
                product=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
                maxProduct=max(product, maxProduct);
            }
            if((i+3)<n && (j+3)<n)
            {
                product=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
                maxProduct=max(product, maxProduct);
            }
            if((i-3)>=0 && (j-1)<=0)
            {
                product=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
                maxProduct=max(product, maxProduct);
            }
            resarr[i][j]=maxProduct;
        }
    }
    cout<<maxProduct<<endl;
    for(int i=0; i<n; i++)
    {    
        for(int j=0; j<n; j++)
            cout<<resarr[i][j]<<" ";
        cout<<endl;
    }       
    return 0;
}
