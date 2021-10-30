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

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}


void deleteAtHead(node* &head)
{
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void deleteNode(node* &head, int val)
{
    if(head==NULL)
        return;
    if(head->next==NULL)
    {
        deleteAtHead;
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
        temp=temp->next;
    node* NodetoDelete=temp->next;
    temp->next=temp->next->next; 
    delete NodetoDelete;
}

node* reverse(node* &head)
{
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;
    while(currPtr != NULL)
    {
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;
        prevPtr=currPtr;
        currPtr=nextPtr;
    }
    return prevPtr;
}

node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
        return head;

    node* newHead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}

node* reverseknodes(node* &head, int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
        head->next=reverseknodes(nextptr, k);   
    return prevptr;
}

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    display(head);
    // deleteNode(head, 9);
    // deleteAtHead(head);
    node* newhead=reverseknodes(head, 3);
    display(newhead);
    //cout<<endl<<search(head, 7);
    return 0;
}

