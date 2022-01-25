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

int sumKlevel(struct node* root, int K)
{
    if(root==NULL)
        return -1;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;

    while(!q.empty())
    {
        node* n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(level==K)
                sum+=n->data;
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    return sum;
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
    cout<<sumKlevel(root, 2);    
   
    return 0; 
}