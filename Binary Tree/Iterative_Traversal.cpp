#include<bits/stdc++.h>
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

void preOrder(struct node* root)
{
    if(root==NULL)
        return;
    stack<node*> st;
    st.push(root);
    while(!st.empty())
    {
        node* n=st.top();
        st.pop();
        if(n->right)
            st.push(n->right);
        if(n->left)
            st.push(n->left);
        cout<<n->data<<" ";
        
    }
}

void inOrder(struct node* root)
{
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(struct node* root)
{
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
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
    // inOrder(root);
    // postOrder(root);   
   
   return 0; 
}