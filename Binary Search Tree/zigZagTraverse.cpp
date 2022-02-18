#include<iostream>
#include<stack>
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

void zigzagTraversal(Node* root) {
    // if(root==NULL)  return;
    stack<Node*> nextLevel;
    stack<Node*> currLevel;
    bool left2right=true;
    currLevel.push(root);
    while(!currLevel.empty()) {
        Node* temp=currLevel.top();
        currLevel.pop();
        if(temp) {
            cout<<temp->data<<" ";
            if(left2right) {
                if(temp->left) 
                    nextLevel.push(temp->left);
                if(temp->right)
                    nextLevel.push(temp->right);
            }
            else {
                if(temp->right)
                    nextLevel.push(temp->right);
                if(temp->left) 
                    nextLevel.push(temp->left);      
            }
        }
        if(currLevel.empty()) {
            left2right=!left2right;
            swap(currLevel, nextLevel);
        }
    }
    
    
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
    zigzagTraversal(root);
    return 0;
}