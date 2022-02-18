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

Node* searchBST(Node* root, int key)
{
    if(root==NULL || root->data==key)
        return root;

    if(key<root->data)
        return searchBST(root->left, key);
 
    // key > data
    return searchBST(root->right, key);
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
    if(searchBST(root, 7))
        cout<<"Key exists!\n";
    else
        cout<<"Key doesn't exist!\n";
    return 0;
}
