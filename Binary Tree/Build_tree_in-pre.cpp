#include<iostream>
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

int search(int inorder[], int start, int end, int curr)
{
    for(int i=start; i<=end; i++)
        if(inorder[i]==curr)
            return i;
    return -1;
}

node* buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx=0;
    if(start>end)
        return NULL;
    int curr=preorder[idx];
    idx++;
    node* n=new node(curr);
    if(start==end)
        return n;
    int pos=search(inorder, start, end, curr);
    n->left=buildTree(preorder, inorder, start, pos-1);
    n->right=buildTree(preorder, inorder, pos+1, end);
}

node* buildTree2(int postorder[], int inorder[], int start, int end)
{
    static int idx=4;
    if(start>end)
        return NULL;
    int curr=postorder[idx];
    idx--;
    node* n=new node(curr);
    if(start==end)
        return n;
    int pos=search(inorder, start, end, curr);
    n->right=buildTree2(postorder, inorder, pos+1, end);
    n->left=buildTree2(postorder, inorder, start, pos-1);
}

void inOrderPrint(node* root)
{
    if(root==NULL)
        return;
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

int main()
{
    int preorder[]={1, 2, 4, 3, 5};
    int inorder[]={4, 2, 1, 5, 3};
    int postorder[]={4, 2, 5, 3, 1};
    // node* root=buildTree(preorder, inorder, 0, 4);
    node* root=buildTree2(postorder, inorder, 0, 4);
    inOrderPrint(root);
}