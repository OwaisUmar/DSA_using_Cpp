class Solution{
  public:
    
    Node* reverse(Node* &head)
    {
        Node* prev=NULL;
        Node* curr=head;
        Node* nextptr;
        while(curr!=NULL)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    
    Node* findMid(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL || head->next==NULL)
            return 1;
        Node* mid=findMid(head);
        Node* last=reverse(mid);
        Node* start=head;
        while(last!=NULL)
        {
            if(start->data!=last->data)
                return 0;
            start=start->next;
            last=last->next;
        }
        return 1;
    }
};