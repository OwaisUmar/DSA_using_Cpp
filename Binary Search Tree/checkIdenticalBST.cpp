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

bool checkIdentical(Node* root1, Node* root2)
{
    if(!root1 && !root2) return true;
    if(!root1 || !root2) return true;
    if(root1->data==root2->data && 
        checkIdentical(root1->left, root2->left) &&
        checkIdentical(root1->right, root2->right))
        return true;
    return false;

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

    Node* root2=new Node(5);
    root2->left=new Node(3);
    root2->right=new Node(8);
    root2->left->left=new Node(2);
    root2->left->right=new Node(4);
    root2->right->left=new Node(6);
    root2->right->right=new Node(9);

    cout<<checkIdentical(root, root2);
    return 0;
}