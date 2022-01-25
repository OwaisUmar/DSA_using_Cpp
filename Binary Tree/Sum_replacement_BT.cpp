#include<iostream>
#include<queue>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
}; 

void sumReplacement(node* root)
{
    if(root==NULL)
        return;
    sumReplacement(root->left);
    sumReplacement(root->right);
    if(root->left)
        root->data+=root->left->data;
    if(root->right)
        root->data+=root->right->data;
}

int sumReplacement2(node* root)
{
    if(root==NULL)
        return 0;
    return root->data=sumReplacement2(root->left)+sumReplacement2(root->right)+root->data;
}

void preOrder(node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

 /*
              1
            /   \
           2     3
         /  \   /  \
        4    5 6    7
    */

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    preOrder(root);
    sumReplacement2(root);    
    preOrder(root);
    return 0; 
}