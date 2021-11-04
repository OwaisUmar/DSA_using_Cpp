#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};


void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int lengthLL(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

node* kAppend(node* &head, int k)
{
    int l=lengthLL(head);
    node* newHead;
    node* newTail;
    node* tail=head;
    if(k==0 or k>=l)
        return head;
    if(k==1)
    {
        while(tail->next->next!=NULL)
            tail=tail->next;
        tail->next->next=head;
        newHead=tail->next;
        tail->next=NULL;
    }
    else
    {
        int count=1;
        while(tail->next!=NULL)
        {
            if(count==l-k)
                newTail=tail;
            if(count==l-k+1)
                newHead=tail;
            tail=tail->next;
            count++;
        }
        newTail->next=NULL;
        tail->next=head;
    }
    return newHead;

}

int main()
{
    node* head=NULL;
    for(int i=1; i<=9; i++)
        insertAtTail(head, i);
    node* newHead=kAppend(head, 11);
    display(newHead);
    return 0;
}
