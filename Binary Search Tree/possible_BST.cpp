#include<iostream>
#include<vector>
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

vector<Node*> constructBST(int start, int end) {
    vector<Node*> trees;
    if(start>end) {
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end; i++) {
        vector<Node*> leftSubtrees=constructBST(start, i-1);
        vector<Node*> rightSubtrees=constructBST(i+1, end);

        for(int j=0; j<leftSubtrees.size(); j++) {
            Node* left=leftSubtrees[j];
            for(int k=0; k<rightSubtrees.size(); k++) {
                Node* right=rightSubtrees[k];
                Node* n=new Node(i);
                n->left=left;
                n->right=right;
                trees.push_back(n);               
            }
        }
    }
    return trees;
}

void preOrder(Node* root) {
    if(root==NULL)  return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    vector<Node*> allTrees=constructBST(1, 3);
    for(int i=0; i<allTrees.size(); i++) {
        cout<<i+1<<" : ";
        preOrder(allTrees[i]);
        cout<<endl;
    }
    return 0;
}