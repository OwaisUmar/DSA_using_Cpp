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

Node* inorderSucc(Node* root)
{
    while(root->left!=NULL)
        root=root->left;
    return root;
}

Node* deleteBST(Node* root, int key)
{
    if(key<root->data) 
        root->left=deleteBST(root->left, key);
    else if(key>root->data) 
        root->right=deleteBST(root->right, key);
    else 
    {
        if(root->left==NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if (root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right, temp->data);
    }
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
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(8);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(9);
    inOrderPrint(root);
    root=deleteBST(root, 3);
    cout<<endl;
    inOrderPrint(root);

    return 0;
}