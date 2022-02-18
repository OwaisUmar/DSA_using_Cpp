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

Node* buildBST(int preorder[], int* preorderidx, int key, int min, int max, int n)
{
    if(*preorderidx>=n)
        return NULL;
    Node* root=NULL;
    if(key>min && key<max)
    {
        root=new Node(key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx < n)
            root->left=buildBST(preorder, preorderidx, preorder[*preorderidx], min, key, n);
        if(*preorderidx < n)
            root->right=buildBST(preorder, preorderidx, preorder[*preorderidx], key, max, n);
    }
    return root;
}

void preOrderPrint(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}

int main()
{
    int preorder[]={10, 2, 1, 13, 11};
    int preorderidx=0;
    Node* root=buildBST(preorder, &preorderidx, preorder[0], INT32_MIN, INT32_MAX, 5);
    preOrderPrint(root);
    return 0;
}