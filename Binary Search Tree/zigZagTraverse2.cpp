#include<iostream>
#include<stack>
#include<queue>
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
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    vector<int> ans;
    stack<int> st;
    bool left2right=true;
    while(!q.empty()) {
        Node* n=q.front();
        q.pop();
        if(n) {
            if(left2right) ans.push_back(n->data);
            else st.push(n->data);
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
        }
        else if(!q.empty()) {
            q.push(NULL);
            left2right=!left2right;
            while(!st.empty()) {
                ans.push_back(st.top());
                st.pop();
            }
        }           
    }
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
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