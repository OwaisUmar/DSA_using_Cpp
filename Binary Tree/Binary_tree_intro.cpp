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


int main()
{
    struct node* root=new node(15);
    root->left=new node(30);
    root->right=new node(45);

    /*
        15
       /  \
      30  45
    */
   root->left->left=new node(60);
   root->left->right=new node(90);
    
    /*
            15
           /  \
          30  45
         /  \
       60   90
    */
   return 0; 
}