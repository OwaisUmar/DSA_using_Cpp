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

bool checkBST(Node* root, Node* min, Node* max)
{
    if(root==NULL)
        return true;
    if(min!=NULL && root->data<=min->data)
        return false;
    if(max!=NULL && root->data>=max->data)
        return false;
    return checkBST(root->left, min, root) and checkBST(root->right, root, max);
}

int main()
{
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(8);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(9);
    if(checkBST(root, NULL, NULL))
        cout<<"Its a binary search tree!\n";
    else
        cout<<"Oops, not a BST. Better luck next time!\n";
    return 0;
}