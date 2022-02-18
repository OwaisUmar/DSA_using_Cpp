#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createBST(int arr[], int l, int r)
{
    if(l>r)
        return NULL;
    int mid=(r+l)/2;
    Node* root=new Node(arr[mid]);
    root->left=createBST(arr, l, mid-1);
    root->right=createBST(arr, mid+1, r);
    return root;
}

void inOrderPrint(Node* root)
{
    if(root==NULL)
        return;
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

int main()
{
    int arr[]={1, 2, 4, 6, 8, 9, 10};
    Node* root=createBST(arr, 0, 6);
    inOrderPrint(root);
    return 0;
}