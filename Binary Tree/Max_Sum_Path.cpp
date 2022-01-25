#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int findMaxSumUtil(Node* root, int &sum)
{
    if(root==NULL)
        return 0;
    int left=findMaxSumUtil(root->left, sum);
    int right=findMaxSumUtil(root->right, sum);
    int maxNodes=max(max(root->data, root->data+right+left), 
                     max(root->data+right, root->data+left));
    sum=max(sum, maxNodes);
    return max(root->data, max(root->data+right, root->data+left));
}

int maxSumPath(Node* root)
{ 
    int sum=INT16_MIN;
    findMaxSumUtil(root, sum);
    return sum;
}


/*
              1
            /   \
           2     3
         /  \   /  \
        4    5 6    7
*/

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<maxSumPath(root);
    return 0;
}