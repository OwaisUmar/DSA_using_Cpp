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

Node* insertBST(Node* root, int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
        root->left=insertBST(root->left, val);
    else
        root->right=insertBST(root->right, val);
    return root;
}

void inOrder(Node* root)
{
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main()
{
    Node* root=NULL;
    root=insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);
    insertBST(root, 2);
    insertBST(root, 8);
    inOrder(root);
    return 0;
}