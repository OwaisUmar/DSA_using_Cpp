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

int heightTree(node* root)
{
    if(root==NULL)
        return 0;
    return max(heightTree(root->left), heightTree(root->right))+1; 
}

int diameterTree(node* root)
{
    if(root==NULL)
        return 0;
    int leftHeight=heightTree(root->left);
    int rightHeight=heightTree(root->right);
    return max((leftHeight+rightHeight+1), max(leftHeight, rightHeight)); 
}

int diameterTreeOptimized(node* root, int &diam)
{
    if(root==NULL)
        return 0;
    int lh=diameterTreeOptimized(root->left, diam);
    int rh=diameterTreeOptimized(root->right, diam);
    diam=max(diam, 1+lh+rh);
    return max(lh, rh)+1;
}

int diameterTreeOptimized2(node* root, int* height)
{
    if(root==NULL)
        return 0;
    int lh=0, rh=0;
    int ld=diameterTreeOptimized2(root->left, &lh);
    int rd=diameterTreeOptimized2(root->right, &rh);
    *height=max(lh, rh)+1;
    int currDiam=lh+rh+1;
    return max(currDiam, max(ld, rd));       
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
    int height=0;
    cout<<diameterTreeOptimized2(root, &height)<<endl;    
    int diam=0;
    diameterTreeOptimized(root, diam);    
    cout<<diam<<endl;
    return 0; 
}