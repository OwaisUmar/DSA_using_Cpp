#include <iostream>
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

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    if(head=NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n; 
}

void insertAtTail(node* &head, int val)
{
    if(head==NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
    n->next=NULL;
}

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void evenAfterOdd(node* head)
{
    node* oddPtr=head;
    node* evenPtr=head->next;
    node* firstEven=evenPtr;
    while (oddPtr->next!=NULL && evenPtr->next!=NULL)
    {
        oddPtr->next=evenPtr->next;
        oddPtr=oddPtr->next;
        evenPtr->next=oddPtr->next;
        evenPtr=evenPtr->next;
    }
    oddPtr->next=firstEven;
}

int main()
{
    node* head=NULL;
    int values[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i=0; i<9; i++)
        insertAtTail(head, values[i]);
    display(head);   
    evenAfterOdd(head);
    display(head);
    return 0;
}