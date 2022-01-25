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

void leftView(node* root)
{
    if(root==NULL)
        return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        node* n=q.front();
        q.pop();

        if(n)
        {
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
            cout<<q.front()->data<<" ";
        }
    }
}

void leftView2(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty()) 
    {
        int size=q.size();
        for(int i=1; i<=size; i++)
        {
            node* n=q.front();
            q.pop();
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
            if(i==1)
                cout<<n->data<<" ";
        }
    }
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
    leftView2(root);
    return 0; 
}