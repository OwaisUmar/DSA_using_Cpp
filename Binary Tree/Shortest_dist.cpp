#include<iostream>
#include<vector>
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

// int findDistance(Node* root)


Node* LCA(Node* root, int n1, int n2){
    if(root==NULL)
        return NULL;
    if(root->data==n1 || root->data==n2)
        return root;
    Node* leftLCA=LCA(root->left, n1, n2);
    Node* rightLCA=LCA(root->right, n1, n2);
    if(leftLCA && rightLCA)
        return root;
    if(leftLCA)
        return leftLCA;
    return rightLCA;
}

int findDistance(Node* LCA, int key, int dist)
{
    if(LCA==NULL)
        return -1;
    if(LCA->data==key)
        return dist;
    int left=findDistance(LCA->left, key, dist+1);
    int right=findDistance(LCA->right, key, dist+1);
    if(left!=-1)
        return left;
    else
        return right;
}

int distBtwNodes(Node* root, int n1, int n2){
    if(root==NULL)
        return -1;
    Node* lca=LCA(root, n1, n2);
    int ld=findDistance(lca, n1, 0);
    int rd=findDistance(lca, n2, 0);
    return ld+rd;
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
    cout<<distBtwNodes(root, 4, 6);
    return 0;
}

