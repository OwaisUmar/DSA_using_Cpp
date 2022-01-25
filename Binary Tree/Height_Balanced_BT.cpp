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


bool isBalanced(node* root, int* height)
{
    if(root==NULL)
        return true;
    int lh=0, rh=0;
    if(isBalanced(root->left, &lh)==false)
        return false;
    if(isBalanced(root->right, &rh)==false)
        return false;
    *height=max(lh, rh)+1;
    if(abs(lh-rh)<=1)
        return true;
    else        
        return false;
}


/*  root
              1
            /   \
           2     3
         /  \   /  \
        4    5 6    7
    Height Balanced Tree
*/

/*  root2
              1
             /   
            2
           /  
          3
    Height Unbalanced Tree
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

    struct node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);

    int height=0;
    cout<<isBalanced(root2, &height)<<endl;
    return 0;
}