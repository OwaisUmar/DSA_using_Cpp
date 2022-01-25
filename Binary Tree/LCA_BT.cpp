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

bool findPath(Node* root, int key, vector<int> &path){
    if(root==NULL)
        return false;
    path.push_back(root->data);
    if(root->data==key)
        return true;

    if(findPath(root->left, key, path) || findPath(root->right, key, path))
        return true;

    path.pop_back();
    return false;
}

int LCA(Node* root, int n1, int n2){
    vector<int> path1;
    vector<int> path2;
    if(!findPath(root, n1, path1) || !findPath(root, n2, path2))
        return -1;
    int pathChange=0;
    for(; pathChange<path1.size() && path2.size(); pathChange++){
        if(path1[pathChange]!=path2[pathChange])
            break;
    }
    return path1[pathChange-1];
}

Node* LCA2(Node* root, int n1, int n2){
    if(root==NULL)
        return NULL;
    if(root->data==n1 || root->data==n2)
        return root;
    Node* leftLCA=LCA2(root->left, n1, n2);
    Node* rightLCA=LCA2(root->right, n1, n2);
    if(leftLCA && rightLCA)
        return root;
    if(leftLCA)
        return leftLCA;
    return rightLCA;
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
    // cout<<LCA(root, 3, 6);
    Node* lca=LCA2(root, 6, 5);
    if(lca)
        cout<<lca->data<<endl;
    else    
        cout<<"Not found";
    return 0;
}

