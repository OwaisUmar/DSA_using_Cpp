#include<iostream>
#include<climits>
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

void findPositions(Node* root, Node** first, Node** mid, Node** last, Node** prev) {
    if(root==NULL) 
        return;
    findPositions(root->left, first, mid, last, prev);
    if(*prev && root->data < (*prev)->data) {
        if(*first==NULL){
            *first=*prev;
            *mid=root;
        }
        else {
            *last=root;
        }
    }
    *prev=root;

    findPositions(root->right, first, mid, last, prev);
}

void swapNode(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

void recoverBST(Node* root) {
    Node *first=NULL, *mid=NULL, *last=NULL, *prev=NULL;

    findPositions(root, &first, &mid, &last, &prev);

    if(first && last)
        swapNode(&(first->data), &(last->data));
    else if(first && mid)
        swapNode(&(first->data), &(mid->data));

}

void inOrder(Node* root)
{
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main()
{
    Node* root=new Node(5);
    root->left=new Node(8);
    root->right=new Node(3);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(9);


    inOrder(root);
    cout<<endl;
    recoverBST(root);
    inOrder(root);

    return 0;
}